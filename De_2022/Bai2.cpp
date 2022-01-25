#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        int a,d;cin>>a;int arr[a];d=0;
        for (int i=0;i<a;i++){
            cin>>arr[i];
        }
        for (int j=0;j<a-2;j++){
            for (int m=1;m<=max(max(arr[j],arr[j+1]),arr[j+2]);m++){
                if (arr[j]%m==0 && arr[j+1]%m==0 && arr[j+1]%m==0){
                    d=max(d,m);
                }
            }
        }
        cout<<d;
    return 0;
}