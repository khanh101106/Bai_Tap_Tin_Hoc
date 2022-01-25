#include <iostream>
using namespace std;

int main(){
	int a,b,phu,phu1=0;cin>>a>>b;int arr[a][b];bool check=true;
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			cin>>arr[i][j];
		}
	}
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			phu=arr[i][0];arr[i][0]=arr[i][j];arr[i][j]=phu;
			for (int m=1;m<b;m++){
				if (arr[i][0]<=arr[i][m]) check=false;
			}
			phu=arr[i][0];arr[i][0]=arr[i][j];arr[i][j]=phu;
			phu=arr[0][j];arr[0][j]=arr[i][j];arr[i][j]=phu;
			for (int n=1;n<a;n++){
				if (arr[0][j]>=arr[n][j]) check=false;
			}
			phu=arr[0][j];arr[0][j]=arr[i][j];arr[i][j]=phu;
			if (check==true) phu1+=1;
			else check=true;
		}	
	}
	if (phu1>0){
		cout<<"'CO PHAN TU YEN NGUA'"<<endl;
		for (int i=0;i<a;i++){
			for (int j=0;j<b;j++){
				phu=arr[i][0];arr[i][0]=arr[i][j];arr[i][j]=phu;
				for (int m=1;m<b;m++){
					if (arr[i][0]<=arr[i][m]) check=false;
				}
				phu=arr[i][0];arr[i][0]=arr[i][j];arr[i][j]=phu;
				phu=arr[0][j];arr[0][j]=arr[i][j];arr[i][j]=phu;
				for (int n=1;n<a;n++){
					if (arr[0][j]>=arr[n][j]) check=false;
				}
				phu=arr[0][j];arr[0][j]=arr[i][j];arr[i][j]=phu;
				if (check==true) cout<<arr[i][j]<<endl;
				else check=true;
			}	
		}
	}
	else cout<<"'KHONG CO PHAN TU YEN NGUA'";
	return 0;
}