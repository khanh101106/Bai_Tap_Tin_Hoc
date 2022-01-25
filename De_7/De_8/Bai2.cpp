#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,m,n;cin>>a;int arr[a];
	for (int i=0;i<a;i++){
		cin>>m>>n;arr[i]=n-m;
	}
	sort(arr,arr+a);
	for (int i=0;i<a;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}