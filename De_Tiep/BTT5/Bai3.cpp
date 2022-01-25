#include <iostream>
using namespace std;

int main(){
		int a[10]={1,2,3,4,5,6,7,8,9,9};int n,m;cin>>n>>m;
		a[n+1]=m;
		for (int i=0;i<10;i++) cout<<a[i]<<" ";
	return 0;
}