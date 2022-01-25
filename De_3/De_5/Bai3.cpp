#include <iostream>
using namespace std;

int main(){
	int a,b,sum=0;cin>>a>>b;int arr1[b]={0},arr2[b][2];
	for (int i=0;i<a;i++) cin>>arr2[i][0]>>arr2[i][1];
	for (int i=1;i<=b;i++){
		if (arr1[i-1]!=0){
			for (int j=0;j<a;j++){
				if (arr2[j][0]==i) arr1[arr2[j][1]-1]=arr2[j][1];
				else if (arr2[j][1]==i) arr1[arr2[j][0]-1]=arr2[j][0];
			}
		}
		else{
			arr1[i-1]=i;sum+=1;
			for (int j=0;j<a;j++){
				if (arr2[j][0]==i) arr1[arr2[j][1]-1]=arr2[j][1];
				else if (arr2[j][1]==i) arr1[arr2[j][0]-1]=arr2[j][0];
			}
			cout<<sum<<endl;
			for (int m=0;m<b;m++) cout<<arr1[m]<<" ";
				cout<<endl;
		}
	}
	cout<<sum-1;
	return 0;
}