#include <iostream>
#include <fstream>
using namespace std;
string a;int n;
void nhap(){
	cin>>n;
	ifstream cin;
	cin.open("BAI1.inp");
	cin>>a;
}
void xuat(){
	ofstream cout;
	cout.open("BAI1.out");
	cout<<n<<endl;
	for (size_t i=0;i<a.size();i++){
		int m=(((int)(char {a[i]})+n));
		if (m>90){
			cout<<(char)((m-64)%27+65);
		}
		else cout<<(char)(m);
	}
}
int main(){
	nhap();
	xuat();
	return 0;
}