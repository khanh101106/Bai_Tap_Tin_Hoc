#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int inp,phu,maxx,minn,minnn;cin>>inp;int arr[inp];maxx=-1;phu=0;bool check=true;
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
	minn=maxx;minnn=maxx;
	for (int i=0;i<inp-1;i++){
		for (int j=i+1;j<inp;j++){
			for (int m=i+1;m<=j;m++){
				phu+=arr[m];
			}
			minn=min(minn,abs(phu+arr[i]));phu=0;
		}
	}
	for (int i=0;i<inp-1;i++){
		for (int j=inp-1;j>=i+1;j--){
			for (int m=i+1;m<=j;m++){
				phu+=arr[m];
			}
			minnn=min(minnn,abs(phu+arr[i]));phu=0;
			if (minnn==minn){
				check=false;
				cout<<i+1<<" "<<j+1<<" ";break;
			}
		if (check==false) break;
		}
	if (check==false) break;
	}
	cout<<minn;
	return 0;
}		