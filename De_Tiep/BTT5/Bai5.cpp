#include <iostream>
using namespace std;

int main(){
	int arr[10];
	for (int i=0;i<10;i++) cin>>arr[i];
	for (int j=0;j<9;j++){
		if (arr[j+1]>arr[j]) cout<<arr[j+1]<<" ";
		else break;
		cout<<endl;
	}
	return 0;
}