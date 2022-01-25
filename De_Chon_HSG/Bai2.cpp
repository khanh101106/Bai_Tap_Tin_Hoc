#include <iostream>
using namespace std;

int main(){
    int a,b,c,h;cin>>a;int arr[a+1];b=1;arr[a]=0;c=0;h=1;int l=0;
    for (int i=0;i<a;i++){
        cin>>arr[i];
    } 
    for (int j=0;j<=a;j++){
        if (arr[j]<=arr[j+1]) b+=1;
        else if (arr[j]>arr[j+1] && b!=1){
            c=max(c,b);b=1;
        }
    }
    cout<<c<<endl;
    for (int d=0;d<=a;d++){
        if (arr[d]<=arr[d+1]) h+=1;
        else if (arr[d]>arr[d+1] && h!=1){
            if (h==c){
                l=d;
                break;
            }
            h=1;
        }
    }
    for (int k=l+1-c;k<=l;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}