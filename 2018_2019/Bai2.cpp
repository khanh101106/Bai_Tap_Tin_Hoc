#include <iostream>
using namespace std;
int main(){
    int a,b,c,k,h,n,q,w;cin>>a>>b;int arr[a],arr1[a];bool check=true;c=0;n=0;q=0;w=0;
    for  (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int j=0;j<a;j++){
        if (arr[j]<2) check=false;
        for (int m=2;m<arr[j];m++){
            if (arr[j]%m==0) check=false;
        }
        if (check==true){
            arr1[c]=j;c+=1;
        }
        check=true;
    }
    int arr2[c];
    while (n<b){
        cin>>k>>h;
        for (int p=0;p<c;p++){
            if (k-1<=arr1[p] && arr1[p]<=h-1) q+=1;
        }
        arr2[w]=q;q=0;w+=1;
        n+=1;
    }
     for (int e=0;e<w;e++){
        cout<<arr2[e]<<endl;
     }
    return 0;
}