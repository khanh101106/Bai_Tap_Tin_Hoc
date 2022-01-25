#include <iostream>
using namespace std;

int main(){
	int a,b=0,k,h,c=0;cin>>a;int arr[a];
	for (int i=0;i<a;i++) cin>>arr[i];
	for (int i=0;i<a-1;i++){
		for (int j=a-1;j>i;j--){
			for (int m=i;m<=j;m++) b+=arr[m];
			if (b>c){
				c=b;k=i;h=j;
			}
			b=0;
		}
	}
	cout<<k+1<<" "<<h+1<<endl<<c;
	return 0;
}