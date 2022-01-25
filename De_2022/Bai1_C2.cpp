#include <iostream>
using namespace  std;

int main(){
    int a,du,b;cin>>a;int arr[a],arr1[a];bool check=true;int sum=0;b=0;
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int j=0;j<a;j++){
        if (arr[j]<2) check=false;
        for (int m=2;m<arr[j];m++){
            if (arr[j]%m==0){
                check=false;break;
            }
        }
        if (check==true){
            while (arr[j]!=0){
                du=arr[j]%10;arr[j]=(arr[j]-du)/10;sum+=du;
            }
        }
        arr1[j]=sum;sum=0;
        check=true;
    }
    for (int n=0;n<a;n++){
        if (arr1[n]<2) check=false;
        for (int h=2;h<arr1[n];h++){
            if (arr1[n]%h==0){
                check=false;break;
            }
        }
        if (check==true){
            b+=1;
        }
        check=true; 
    }
    cout<<b;
    return 0;
}
