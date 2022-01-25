#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,a;cin>>n;a=0;
	for (int i=11;i<pow(10,n);i++){
		if (i%11==0) a++;
	}
	cout<<a;
	return  0;
}