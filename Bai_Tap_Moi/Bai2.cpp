#include <iostream>
using namespace std;

int main(){
	string a,b="";cin>>a;bool check=true;
	for (size_t i=0;i<a.size();i++){
		if (a[i]!=a[a.size()-(i+1)]){
			check=false;break;
		}
		for (size_t j=0;j<b.size();j++){
			if (a[i]==b[j]){
				check=false;break;
			}
		}
		b+=a[i];
	}
	if (check==true) cout<<"CO";
	else cout<<"KHONG";
	return 0;
}