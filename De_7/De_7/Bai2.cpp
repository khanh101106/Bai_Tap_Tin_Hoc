#include <iostream>
using namespace std;

int main(){
	int a,b,c,phu=0,phu1=0;cin>>a;int arr[a];bool check=true;
	for (int i=0;i<a;i++) cin>>arr[i];
	for (int i=0;i<a;i++){
		c=arr[i]%10;
		while (arr[i]!=0){
			b=arr[i]%10;arr[i]=(arr[i]-b)/10;phu+=1;
			if (phu>1){
				if (b>c){
					check=false;break;
				}
			}
			c=b;
		}
		phu=0;
		if (check==true){
			phu1+=1;
		}
		check=true;
	}
	cout<<phu1;
	return 0;
}