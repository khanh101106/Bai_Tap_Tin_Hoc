#include <iostream>
using namespace  std;
string b="";
void per(string a,int st,int end){
    if (st==end) b+=a;
    else{
        for (int i=st;i<=end;i++){
            swap(a[i],a[st]);
            per(a,st+1,end);
            swap(a[i],a[st]);
        }
    }
}
int main(){
    int inp,inp2;cin>>inp>>inp2;
    string a="",c="";
    for (int i=1;i<=inp;i++) a+=to_string(i);
    int end=a.size();
    per(a,0,end-1);
    for (size_t i=0;i<b.size();i+=inp){
    	for (size_t j=i;j<i+inp2;j++) cout<<b[j]<<" ";
    	cout<<endl;
	}
	cout<<b.size()/inp<<endl;
    return 0;
}