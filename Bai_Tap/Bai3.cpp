#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b,c=0;cin>>a>>b;bool check=true,check1=true;string m;
	for (int i=a;i<=b;i++){
		for (int j=2;j<=(int)sqrt(i);j++){
			if (i%j==0){
				check=false;break;
			}
		}
		if (check==true){
			m=to_string(i);
			for (size_t j=0;j<m.size();j++){
				if (m[j]!=m[m.size()-(j+1)]){
					check1=false;break;
				}
			}
			if (check1==true){
				c+=1;cout<<i<<endl;
			}
		}
		check1=check=true;
	}
	if (c==0) cout<<0;
	return 0;
}