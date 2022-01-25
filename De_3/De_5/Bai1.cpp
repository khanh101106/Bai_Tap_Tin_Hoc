#include <iostream>
using namespace std;

int main(){
	string a;cin>>a;bool check=true;
	for (size_t i=0;i<a.size();i++){
		if (a[i]!=a[a.size()-(i+1)]) check=false;
	}
	if (check==true) cout<<"CO";
	else cout<<"KHONG";
	return 0;
}