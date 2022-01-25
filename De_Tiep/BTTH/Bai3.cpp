#include <iostream>
using namespace std;
string b="";
void pts(int a,int total=0){
	cout<<b<<endl;
	if (total==a){
		cout<<1;
	}
	else if (total<a){
		for (int i=1;i<a;i++){
			b+=to_string(i);
			pts(3,total+=i);
		}
	}
}
int main(){
	pts(3);
	return 0;
}