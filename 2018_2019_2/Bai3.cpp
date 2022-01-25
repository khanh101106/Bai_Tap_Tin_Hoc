#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,c,d,m,n;string b,e;e="";
    cin>>a>>b>>c;
    if (b=="Cong"){
        d=a+c;
    }
    else if (b=="Tru"){
        d=a-c;
    }
    else{
        d=(a-(a%c))/c;
    }
    if (d==0){
        cout<<0;
        }
    while (d>0){
        m=d%2;d=(d-m)/2;
        e+=to_string(m);
        }
    for (int h=0;h<e.length();h++){
        cout<<e[e.length()-(h+1)];
    }
    return 0;
}