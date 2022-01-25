#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int a,k=0,maxx=0;cin>>a;string b,c="";bool check=true;
    for (int i=0;i<a;i++){
    cin>>b;c+=b;
    }
    transform(c.begin(), c.end(),c.begin(),::toupper);
    string d="";
    for (size_t i=0;i<c.size();i++){
        for  (size_t j=0;j<d.size();j++){
            if (c[i]==d[j]){
                check=false;break;
            }
        }
        if (check==true)  d+=c[i];
        check=true;
    }
    for (size_t i=0;i<d.size();i++){
        for (size_t j=0;j<c.size();j++){
            if (c[j]==d[i]) k+=1;
        }
        maxx=max(maxx,k);k=0;
    }
    cout<<maxx;
    return 0;
}
