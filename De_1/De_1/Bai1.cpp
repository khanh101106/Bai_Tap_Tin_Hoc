include <iostream>
using namespace  std;

int main(){
    int a,d,k,h,l,phu1,phu2,phu3,phu4;cin>>a;string arr[a],b,c;d=0;k=0;h=0;l=0;phu1=0;phu2=0;phu3=0;phu4=0;;
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int j=0;j<a;j++){
        for (size_t m=0;m<arr[j].size();m++){
            if (static_cast<int>(char {arr[j][m]})>=49 && static_cast<int>(char {arr[j][m]})<=57 && static_cast<int>(char {arr[j][m+1]})>=49 && static_cast<int>(char {arr[j][m+1]})<=57) d+=((static_cast<int>(char {arr[j][m]})-48)*10+(static_cast<int>(char {arr[j][m+1]})-48));
            else if ((static_cast<int>(char {arr[j][m]})>=49 && static_cast<int>(char {arr[j][m]})<=57) && !(static_cast<int>(char {arr[j][m+1]})>=49 && static_cast<int>(char {arr[j][m+1]})<=57) && !(static_cast<int>(char {arr[j][m-1]})>=49 && static_cast<int>(char {arr[j][m-1]})<=57)) d+=(static_cast<int>(char {arr[j][m]})-48);
            else if (!(static_cast<int>(char {arr[j][m]})>=49 && static_cast<int>(char {arr[j][m]})<=57) && !(static_cast<int>(char {arr[j][m+1]})>=49 && static_cast<int>(char {arr[j][m+1]})<=57)  && static_cast<int>(char {arr[j][m]})!=40 && static_cast<int>(char {arr[j][m]})!=41) d+=1;
            else if (static_cast<int>(char {arr[j][m]})==41 && (static_cast<int>(char {arr[j][m+1]})>=49 && static_cast<int>(char {arr[j][m+1]})<=57)) d-=(static_cast<int>(char {arr[j][m+1]})-48);
            if (static_cast<int>(char {arr[j][m]})==40) k+=1;
            if (static_cast<int>(char {arr[j][m]})==41 && (static_cast<int>(char {arr[j][m+1]})>=49 && static_cast<int>(char {arr[j][m+1]})<=57)){
                h+=1;l+=1;
            }
            else if (static_cast<int>(char {arr[j][m]})==41 && !(static_cast<int>(char {arr[j][m+1]})>=49 && static_cast<int>(char {arr[j][m+1]})<=57)){
                h+=1;
            }
        }
        int arr1[k],arr2[h],arr3[l];
        for (size_t n=0;n<arr[j].size();n++){
            if (static_cast<int>(char {arr[j][n]})==40){
                arr1[phu1]=n;phu1+=1;
            }
            if (static_cast<int>(char {arr[j][n]})==41){ //&& (static_cast<int>(char {arr[j][n+1]})>=49 && static_cast<int>(char {arr[j][n+1]})<=57)){
                arr2[phu2]=n;arr3[phu3]=n+1;phu2+=1;phu3+=1;
            }

        }
        
        for (int r=0;r<phu1;r++){
            for (int o=arr1[r]+1;o<arr2[r];o++){
                if (static_cast<int>(char {arr[j][o]})>=49 && static_cast<int>(char {arr[j][o]})<=57 && static_cast<int>(char {arr[j][o+1]})>=49 && static_cast<int>(char {arr[j][o+1]})<=57) phu4+=((static_cast<int>(char {arr[j][o]})-48)*10+(static_cast<int>(char {arr[j][o+1]})-48));
                else if ((static_cast<int>(char {arr[j][o]})>=49 && static_cast<int>(char {arr[j][o]})<=57) && !(static_cast<int>(char {arr[j][o+1]})>=49 && static_cast<int>(char {arr[j][o+1]})<=57) && !(static_cast<int>(char {arr[j][o-1]})>=49 && static_cast<int>(char {arr[j][o-1]})<=57)) phu4+=(static_cast<int>(char {arr[j][o]})-48);
                else if (!(static_cast<int>(char {arr[j][o]})>=49 && static_cast<int>(char {arr[j][o]})<=57) && !(static_cast<int>(char {arr[j][o+1]})>=49 && static_cast<int>(char {arr[j][o+1]})<=57)  && static_cast<int>(char {arr[j][o]})!=40 && static_cast<int>(char {arr[j][o]})!=41) phu4+=1;
            }
            //cout<<d<<" "<<phu4<<" ";
            if (!(static_cast<int>(char {arr[j][arr3[r]]})>=49 && static_cast<int>(char {arr[j][arr3[r]]})<=57)){
                phu4=0;
            }
            else{
            d-=phu4;phu4=phu4*static_cast<int>(char {arr[j][arr3[r]]-48});d+=phu4;phu4=0;
            }
        }
        cout<<d;
        d=0;h=0;l=0;k=0;
    return 0;
}