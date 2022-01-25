#include<iostream>
using namespace std;

int main(){
    int a;cin>>a;bool check;check=true;
    string arr[a];string arr1[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int j=0;j<a;j++){
        for (int m=0;m<arr[j].length();m++){
            if (arr[j][m]!=arr[j][arr[j].length()-(m+1)]){
                check=false;break;
            }
        } 
        if (check==true){
            arr1[j]="CO";
        }
        else{
            arr1[j]="KHONG";
            check=true;
        }
         
    }    
    for (int n=0;n<a;n++){
        cout<<arr1[n]<<endl;
    }
    return 0;
}