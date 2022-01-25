#include <iostream>
using namespace std;

int main(){
	string a,b,phu="";cin>>a>>b;int phu1=0;
	for (size_t i=0;i<b.size();i++){
		for (size_t j=i;j<i+a.size();j++){
			phu+=b[j];
		}
		if (phu==a){
			phu1+=1;
		}
		phu="";
	}
	cout<<phu1;
	return 0;
}