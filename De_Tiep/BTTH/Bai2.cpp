#include <iostream>
#include <algorithm>
#include <string>
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
string sapxep(string a){
    string phu[a.size()],phu1;
    for (size_t m=0;m<a.size();m++) phu[m]=a[m];
    sort(phu,phu+a.size());
    for (size_t m=0;m<a.size();m++) phu1+=phu[m];
    return phu1;
}
int main(){
    int inp,inp2;cin>>inp>>inp2;
    string a="",c="";
    for (int i=1;i<=inp;i++) a+=to_string(i);
    int end=a.size(),m=0;
    per(a,0,end-1);
    int arr[b.size()/3];
    for (size_t i=0;i<b.size();i+=inp){
        for (size_t j=i;j<i+inp2;j++) c+=b[j];
        arr[m]=stoi(c);c="";m+=1;
    }
    sort(arr,arr+m);
    for (int i=0;i<m-1;i++){
        if (arr[i]==0) continue;
        else{
            for (int j=i+1;j<m;j++){
                if (to_string(arr[i])==sapxep(to_string(arr[j]))) arr[j]=0;
            }
        }
    }
    int n=1;
    for (int i=0;i<m;i++){
        if (arr[i]!=0){
            cout<<n<<".";
            for (size_t j=0;j<to_string(arr[i]).size();j++) cout<<to_string(arr[i])[j]<<" ";
            cout<<endl;n+=1;
        }
    }
    cout<<"Tong so cach chon:"<<n-1<<endl;
    return 0;
}