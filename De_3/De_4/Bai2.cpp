#include <iostream>
#include <string>
using namespace std;

int main(){
	int a,phu,phu1,phu2,phu3,phu5;cin>>a;int arr[a];string arr1[a],phu4;phu1=0;phu2=0;phu3=1;phu5=0;
	for (int i=0;i<a;i++) cin>>arr[i];
	for (int i=0;i<a;i++){
		phu=arr[0];arr[0]=arr[i];arr[i]=phu;
		for (int j=1;j<=arr[0];j++){
			if (arr[0]%j==0) phu1+=1;
		}
		for (int j=1;j<a;j++){
			for (int m=1;m<=arr[j];m++){
				if (arr[j]%m==0) phu2+=1;
			}
			if (phu2==phu1){
				phu3+=1;
			}
			phu2=0;

		}
		arr1[i]=to_string(phu1)+" "+to_string(phu3);
		phu1=0;phu3=1;
	}
	for (int i=0;i<a;i++){
		phu4=arr1[0];arr1[0]=arr1[i];arr1[i]=phu4;
		for (int j=1;j<a;j++){
			if (arr1[j]==arr1[0]){
				arr1[j]="";
			}		
		}
	}
	for (int i=0;i<a;i++){
		if (arr1[i]!="") phu5+=1;
	}
	cout<<phu5<<endl;
	for (int i=0;i<a;i++){
		if (arr1[i]!="") cout<<arr1[i]<<endl;
	}
	return 0;
}