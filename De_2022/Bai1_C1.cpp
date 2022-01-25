#include <iostream>
#include <math.h>
using namespace std;
int nt(long n){
	if (n<2) return 0;
	for (int i=2;i<sqrt(n);i++) if (n%i==0) return 0;
	return 1;
	}
int tachso(long n){
	int q=0;
	while (n!=0){
		q+=n%10;
		n=(int)n/10;
		}
	return q;
	}
int main(){
	int N,count=0;
	long buf;
	cin >> N;
	for (int i=0;i<N;i++){
		cin >> buf;
		if (nt(buf)&&nt(tachso(buf))) count++;
		}
	cout << count << endl;
	return 0;
	}