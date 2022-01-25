#include <iostream>
using  namespace std;
string d="";
bool not_in(string a){
	bool check=true;
	for (size_t m=0;m<d.size();m++){
		string s(1,d[m]);
		if (a==s){
			check=false;break;
		}
	}
	return check;
}
int main(){
	int a,m=0;cin>>a;int arr[a];//phan a
	for (int i=0;i<a;i++) cin>>arr[i];
	int b,phu,phu1;cin>>b;int arr2[b],arr3[b];//phan b
	for (int i=0;i<b;i++) cin>>arr2[i];
	// phan a
	for (int i=0;i<a;i++){
		for (int j=0;j<i;j++){
			if (arr[i]>arr[j]) m+=1;
		}
		cout<<m<<" ";m=0;
	}
	cout<<endl;
	//phan b
	for (int i=b-1;i>-1;i--){
		phu=phu1=arr2[i];
			while (true){
				phu+=1;
				if (not_in(to_string(phu))==1){
					for (int j=1;j<phu;j++){
						if (not_in(to_string(j))==0) m+=1;
					}
					if (phu-m>phu1){
						d+=to_string(phu);
						arr3[i]=phu;m=0;break;
					}
					m=0;
				}
			}
	}
	for (int i=0;i<b;i++){
		cout<<arr3[i]<<" ";
	}
	return 0;
}