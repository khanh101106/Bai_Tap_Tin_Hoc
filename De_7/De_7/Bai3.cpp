#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,phu;cin>>a;bool check=true;
	for (int i=pow(10,a-1);i<pow(10,(a));i++){
		if (i!=1){
			for (int j=2;j<sqrt(pow(10,(a+1)));j++){
				if (i%j==0 && i!=j){
					check=false;break;
				}
				if (i%j!=0) continue;
			}
			if (check==true){
				phu=i;cout<<i<<" ";
				while (phu!=0){
					if (phu==1){
						check=false;break;
					}
					phu=(phu-(phu%10))/10;
					for(int j = 2; j <= sqrt(phu); j++){
        				if(phu % j == 0){
        					check=false;break;
        				}
    				}
    				if (check==false) break;
				}
				if (check==true) cout<<i<<" ";
			}
			check=true;
		}
	}
	return 0;
}