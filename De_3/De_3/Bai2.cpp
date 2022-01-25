#include <iostream>
using namespace std;

int main(){
	int a,b;cin>>a>>b;int arr[a][b];
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			cin>>arr[i][j];
		}
	}
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			if (arr[i][j]==0 && arr[i][j-1]==1 && arr[i][j+1]==1 && arr[i-1][j-1]==1 && arr[i-1][j+1]==1 && arr[i+1][j-1]==1 && arr[i+1][j+1]==1 && arr[i+1][j]==1 && arr[i-1][j]==1){
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
	}
	return 0;
}