#include <iostream>
using namespace  std;
int main(){
    int a,b,c,u,v,check;cin>>a>>b;int arr[a],arr1[b];c=0;check=0;
    for (int i=0;i<a;i++){
        arr[i]=0;
    }
    for (int j=0;j<b;j++){
        cin>>arr1[j];
    }
    while (c<b){
        cin>>u>>v;
        for (int m=u-1;m<v;m++){
            arr[m]+=arr1[c];
        }
        c++;
    }
     for (int n=0;n<a;n++){
        for (int h=1;h<arr[n];h++){
            if (arr[n]%h==0) check+=h;
        }
        if (check==arr[n]) cout<<arr[n]<<" ";check=0;
    }
    cout<<endl<<"Sau 3 lần biết đổi ta thu được dãy mới là:"<<endl;
     for (int n=0;n<a;n++){
         cout<<arr[n]<<" ";
     }
    return 0;
}