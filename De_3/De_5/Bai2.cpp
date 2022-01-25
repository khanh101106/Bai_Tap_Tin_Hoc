#include <iostream>
using namespace std;

int main(){
	int a,phu=0;cin>>a;int arr[a];
	for (int i=0;i<a;i++) cin>>arr[i];
	for (int i=0;i<a;i++){
		for (int j=1;j<arr[i];j++){
			if (arr[i]%j==0) phu+=j;
		}
		if (phu==arr[i]){
		cout<<phu<<endl;
		}
		phu=0;
	}
	return 0;
}