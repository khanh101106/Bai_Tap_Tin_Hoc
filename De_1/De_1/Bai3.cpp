#include <iostream>
using namespace std;

int main(){
	int inp,inp1,phu,phu1;cin>>inp>>inp1;char arr[inp][inp1];bool check=true;phu=0;phu1=0;
	for (int i=0;i<inp;i++){
		for (int j=0;j<inp1;j++){
			cin>>arr[i][j];
		}
	}
	for (int k=0;k<inp;k++){
		for (int h=0;h<inp1;h++){
			if (arr[k][h]=='+'){
				for (int p=h+1;p<inp1;p++){
					if (arr[k][p]=='*') check=false;
				}
				for (int q=0;q<inp;q++){
					if (arr[q][h]=='*') phu+=1;
				}
				if (check==true && phu==0){
					phu1+=1;arr[k][h]='*';h+=1;break;
				}
				else if (check==true && phu>0){
					phu=0;
				}
				else if (check==false && phu==0){
					check=true;break;
				}
				else if (check==false && phu>0){
					check=true;phu=0;h+=1;break;
				}
			}
		}
	}
	cout<<phu1<<endl;
	for (int m=0;m<inp;m++){
		for (int n=0;n<inp1;n++){
			cout<<arr[m][n];
		}
	cout<<endl;
	}
	return 0;
}