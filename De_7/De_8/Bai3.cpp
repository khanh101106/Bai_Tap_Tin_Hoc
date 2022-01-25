#include <iostream>
using namespace std;

int main(){
	int a,b,phu=0;cin>>a>>b;int arr[a][b];
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			cin>>arr[i][j];
		}
	}
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			if (arr[i][j]==1){
				if (arr[i+1][j]==0 && i+1<=a) phu+=1; 
				if (arr[i-1][j]==0 && i-1>=0) phu+=1;
				if (arr[i][j-1]==0 && j-1>=0) phu+=1;
				if (arr[i][j+1]==0 && j+1<=b) phu+=1;
			}
			else continue;		}
	}
	cout<<phu;
	return 0;
}