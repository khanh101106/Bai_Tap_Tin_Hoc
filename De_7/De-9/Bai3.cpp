#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,water=0;cin>>a;int arr[a],arr1[a];
	for (int i=0;i<a;i++){
		cin>>arr[i]>>arr1[i];
		water+=arr[i];
	}
	sort(arr1,arr1+a);
	for (int i=0;i<a;i++){
		if (water>=arr1[i]) water-=arr1[i];
		else{
			cout<<i;break;
		}
	}
	return 0;
}