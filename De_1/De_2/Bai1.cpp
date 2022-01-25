#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int inp,phu,max;cin>>inp;string arr[inp];int arr1[inp];phu=0;max=-1;
	for (int n=0;n<inp;n++){
		arr1[n]=0;
	}
	for (int i=0;i<inp;i++){
		cin>>arr[i];
		for (size_t j=0;j<arr[i].size();j++){
			if ((int)(char {arr[i][j]})>=49 && (int)(char {arr[i][j]})<=57 ){
					if ((int)(char {arr[i][j]})-48>=max){
					arr1[i]++;max=(int)(char {arr[i][j]})-48;
				}
				else break;
			}
			
		max=-1;
		}
	}
	sort(arr1,arr1+inp);
	for (int m=0;m<inp;m++){
		for (int h=0;h<inp;h++){
			for (size_t k=0;k<arr[h].size();k++){
				if ((int)(char {arr[h][k]})>=49 && (int)(char {arr[h][k]})<=57) phu++;
			}
			if (phu==arr1[m]){
				cout<<arr[h]<<endl;
				phu=0;arr[h]="";break;
			}
			phu=0;
		}
	}
	return 0;
}