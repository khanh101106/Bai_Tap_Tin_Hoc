#include <iostream>
using namespace std;

int main(){
	int a,b,doc,ngang,max;cin>>a>>b;int arr[a][b];phu1=0;phu2=0;max=1;bool check=true;
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			cin>>arr[i][j];
		}
	}
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			if (arr[i][j]!=arr[i+1][j] && arr[i][j]!=arr[i][j+1] && arr[i][j]!=arr[i][j-1] && arr[i][j]!=arr[i][j-1]){
				arr[i][j]=0;
			}
		}
	}
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			if (arr[i][j]==0) continue;
			else{
				for (int m=i;m<a;m++){
					if (arr[m][j]!=arr[m+1][j]){
						doc=m;
						for (int n=j;n<b;n++){
							if (arr[m][n]!=arr[m][n+1]){
								ngang=n;
								for (int k=i;k<ngang;k++){
									if (arr[i][ngang]!=arr[i][ngang+1]){
										check=false;
									}
								}
								if (check=true){
									for (int h=j;h<b;h++){
										if arr[]
									}
								}
							}
						}
					}
				}
			}
		}
	}
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

}