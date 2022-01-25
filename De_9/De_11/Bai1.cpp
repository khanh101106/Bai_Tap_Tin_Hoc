#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;getline(cin,a);int phu=1;bool check=true,check1=true;
	while (check==true){
		for (size_t i=0;i<a.size();i++){
			string s(1,a[i]);
			if (to_string(phu)==s){ 
				check1=false;break;
			}
		}
		if (check1==true){
			cout<<phu;check=false;
		}
		check1=true;
		phu++;
	}
	return 0;
}