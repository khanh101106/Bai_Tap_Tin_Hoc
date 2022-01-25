#include <iostream>
using namespace std;

int main(){
	string a,b="";getline(cin,a);bool check=true;int sum=0;
	for (size_t i=0;i<a.size();i++){
		if (a[i]==' ') continue;
			for (size_t j=0;j<b.size();j++){
				if (a[i]==b[j]){
					check=false;break;
				}
			}
			if (check==true){
				for (size_t j=i;j<a.size();j++){
					if (a[j]==a[i]) sum+=1;
				}
				cout<<a[i]<<" "<<sum<<endl;sum=0;
			}
			else check=true;
			b+=a[i];
	}
	return 0;
}