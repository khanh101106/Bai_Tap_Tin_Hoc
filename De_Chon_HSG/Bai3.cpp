#include<iostream>
using namespace std;

int main(){
    string a;int b,c;cin>>a;b=1;c=0;
    for (int i=0;i<a.length()-1;i++){
        if (a[i+1]==a[i]){
            b+=1;
        }
        else{
            cout<<b<<a[i];
            c+=b;
            b=1;
        }
    }
    cout<<a.length()-c<<a[a.length()-1];
    return 0;
}