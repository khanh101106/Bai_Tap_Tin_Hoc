#include <iostream>
using namespace std;

int main(){
	int a,phu,phu1,maxx,maxx1;cin>>a;int arr[a];phu=1;maxx=0;maxx1=0;
	for (int i=0;i<a;i++) cin>>arr[i];
	int i,j;cin>>i>>j;
	for (int m=0;m<a-1;m++){
		if (arr[m]==arr[m+1]) phu+=1;
		else{
			maxx=max(maxx,phu);phu=1;
		}
	}
	for (int m=i;m<j-1;m++){
		if (arr[m]==arr[m+1]) phu+=1;
		else{
			maxx1=max(maxx1,phu);phu=1;
		}
	}
	cout<<maxx<<endl<<maxx1;
	return 0;
}