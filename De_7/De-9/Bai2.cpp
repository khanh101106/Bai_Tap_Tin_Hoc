#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	string a,b,phu,phu1="",phu2="",phu6;cin>>a>>b;string arr[a.size()],arr1[b.size()];int phu3,phu4,phu5;
	for (size_t i=0;i<a.size();i++){
		arr[i]=a[i];
	}
	for (size_t i=0;i<b.size();i++){
		arr1[i]=b[i];
	}
	sort(arr,arr+a.size());
	sort(arr1,arr1+b.size());
	for (size_t i=0;i<a.size();i++){
		phu1+=arr[a.size()-(i+1)];
	}
	phu3=stoi(phu1);
	for (size_t i=0;i<b.size();i++){
		phu2+=arr1[b.size()-(i+1)];
	}
	phu4=stoi(phu2);phu5=phu3+phu4;phu6=to_string(phu5);
	string arr2[phu6.size()];
	for (size_t i=0;i<phu6.size();i++){
		arr2[i]=phu6[i];
	}
	sort(arr2,arr2+phu6.size());
	for (size_t i=0;i<phu6.size();i++){
		cout<<arr2[phu6.size()-(i+1)];
	}
	return 0;
}