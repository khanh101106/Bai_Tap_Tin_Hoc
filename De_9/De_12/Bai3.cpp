#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,b,c,phu=0;cin>>a>>b;int arr[b];bool check=true;
	for (int i=0;i<a;i++) cin>>arr[i];
	c=arr[b-1];
	for (int i=0;i<a-1;i++){
		if (arr[i]<arr[i+1]){
			arr[i+1]=-1;swap(arr[i],arr[i+1]);
		}
		else arr[i]=-1;
		for (int j=0;j<a;j++){
			if (arr[j]==c){
				check=false;phu+=1;
			}
		}
		if (check==true){
			cout<<i+1;break;
		}
		check=true;
	}
	if (phu==a-1) cout<<-1;
	return 0;
}
