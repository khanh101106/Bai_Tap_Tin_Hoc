#include <iostream>
#include <math.h>
using namespace std;
bool check_snt(int a){
	bool check=true;
	for (int m=2;m<=sqrt(a);m++){
		if (a%m==0){
			check=false;break;
		}
	}
	if (check==true) return true;
	else return false;
}
int main(){
	int a,b,d;cin>>a>>b;string c="";
	for (int i=a;i<=b;i++){
		d=i;
		while (d!=1){
			for (int j=2;j<=d;j++){
				if (d%j==0 && check_snt(j)==1){
					c+=to_string(j);d/=j;break;
				}
			}
		}
		cout<<c<<endl;c="";
	}
	return 0;
}