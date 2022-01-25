#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,phu,maxx,maxxx,phu2,phu3;cin>>a;int du=0;maxx=0;maxxx=0;phu2=0;unsigned long long b=a%10;phu3=0;
	while (a!=0){
		du+=(a%10);phu=a%10;a=(a-phu)/10;maxx=max(maxx,phu);phu3+=1;
		if (phu3>1){
		b=b*10+phu;
		}
	}
	cout<<du<<endl<<maxx<<endl;
	while (b!=0){
		du+=(b%10);phu=b%10;b=(b-phu)/10;maxxx=max(maxxx,phu);phu2+=1;
		if (maxx==maxxx){
			cout<<(phu2);break;
		}
	}
	return 0;
}