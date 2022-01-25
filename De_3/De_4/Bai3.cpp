#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int inp,phu=0,maxx=0,maxx1=0;cin>>inp;int arr[inp];bool check=true;
	for (int i=0;i<inp;i++){
		cin>>arr[i];
	}
	for (int i=0;i<inp-1;i++){
		for (int j=i+1;j<inp;j++){
			for (int m=i+1;m<=j;m++){
				phu+=arr[m];
			}
			maxx=max(maxx,abs(phu+arr[i]));phu=0;
		}
	}
	for (int i=0;i<inp-1;i++){
		for (int j=i+1;j<inp;j++){
			for (int m=i+1;m<=j;m++){
				phu+=arr[m];
			}
			maxx1=max(maxx1,abs(phu+arr[i]));
			if (maxx1==maxx){
				cout<<i+1<<" "<<j+1;check=false;break;
			}
			phu=0;
		if (check==false) break;
		}
	if (check==false) break;
	}
	cout<<endl<<maxx;
	return 0;
