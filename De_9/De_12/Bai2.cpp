#include <iostream>
using namespace std;

int main(){
	int a,b,phu=0,phu1=0;cin>>a>>b;
	for (int i=a;i<b;i++){
		for (int j=1;j<i;j++){
			if (i%j==0) phu+=j;
		}
		for  (int j=1;j<phu;j++){
			if (phu%j==0) phu1+=j;
		}
		if (i==phu1) cout<<i<<" ";
		phu=phu1=0;
	}
	return 0;
}