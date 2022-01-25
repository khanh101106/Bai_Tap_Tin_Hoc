#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
	int inp;string a,b,c="";cin>>inp;b="";
	for (int i=pow(10,(inp-1));i<pow(10,inp);i++){
		a=to_string(i);
		for (size_t j=0;j<a.size();j++){
			if (a[j]=='1') b+='1';
			else if (a[j]=='6') b+='9';
			else if (a[j]=='9') b+='6';
			else if (a[j]=='8') b+='8';
			else if (a[j]=='0') b+='0';
			else{
				b="";c="";break;
			}
		}
		if (b.size()==a.size()){
			for (size_t i=0;i<b.size();i++) c+=b[b.size()-(i+1)];
			if (a==c) cout<<c<<endl;
		}	
		c="";b="";
	}
		return 0;
}