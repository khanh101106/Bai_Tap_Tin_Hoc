#include<iostream>
using namespace std;

int main(){
    int a,b,c;c=0;
    cin>>a>>b;
    int arr[a];int arr1[b];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int j=0;j<b;j++){
        cin>>arr1[j];
    }
    for (int m=0;m<a;m++){
        for (int n=0;n<b;n++){
            if (arr[m]>arr1[n]){
                c+=1;arr1[n]=100001;break;
            } 
        }
    }
    cout<<c;
    return 0;
}