#include <iostream>
using namespace std;

int main(){
    string a;cin>>a;
    if (a[a.length()]!=0){
        for (int i=0;i<a.length();i++){
            cout<<a[a.length()-(i+1)];
        }
    }
    else{
        for (int i=0;i<a.length();i++){
            cout<<a[a.length()-(i+2)];
        }
    }
    return 0;
}