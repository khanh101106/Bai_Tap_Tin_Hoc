#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,m,n,k;cin>>a>>b>>c>>d;
	if (b==0 || d==0) cout<<-1;
	else{
		m=a*d+c*b;n=b*d;
		if (m<n) k=m;
		else k=n;
		while (true){
			if (m%k==0 && n%k==0){
				cout<<m/k<<" "<<n/k;break;
			}
			k-=1;
		}
	}
	return 0;
}