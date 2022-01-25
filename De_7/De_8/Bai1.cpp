#include <iostream>
using namespace std;

int main(){
	string a,b;cin>>a;bool check=true,check1=true;b="";int phu=0;
	for (size_t i=0;i<a.size();i++){
		for (size_t j=a.size();j>i;j--){
			for (size_t m=i;m<j;m++){
				b+=a[m];
			}
			for (size_t m=0;m<b.size();m++){
				if (b[m]!=b[b.size()-(m+1)]) check=false;
			}
			if (check==true){
				phu+=1;i+=b.size()-1;check1=false;b="";
			}
		check=true;b="";check1=true;
		if (check1==false) break;
		}
	}
	cout<<phu<<endl;
	for (size_t i=0;i<a.size();i++){
		for (size_t j=a.size();j>i;j--){
			for (size_t m=i;m<j;m++){
				b+=a[m];
			}
			for (size_t m=0;m<b.size();m++){
				if (b[m]!=b[b.size()-(m+1)]) check=false;
			}
			if (check==true){
				cout<<b<<endl;i+=b.size()-1;check1=false;b="";
			}
		check=true;b="";check1=true;
		if (check1==false) break;
		}
	}
	return 0;
}