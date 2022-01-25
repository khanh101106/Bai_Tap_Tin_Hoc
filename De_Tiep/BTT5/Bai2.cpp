#include <iostream>
using namespace std;

int main(){
	int arr[10],arr1[10],m3[10];
	for (int i=0;i<10;i++) cin>>arr[i];
	for (int i=0;i<10;i++) cin>>arr1[i];
	for (int i=0;i<10;i++){
		m3[i]=arr[i]+arr1[i];
	}
	for (int i=0;i<10;i++){
		cout<<m3[i]<<" ";
	}
	return 0;
}