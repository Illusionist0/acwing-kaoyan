#include<iostream>
using namespace std;
int main(){
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y,d;
    while(cin>>y>>d){
        int p[13]={0};
        if(y%4!=0||(y%100==0&&y%400!=0)){
            // 非闰年，365天
            m[1]=28;
        }
        else m[1]=29;
        for(int i=1;i<=12;i++){
            p[i]=p[i-1]+m[i-1];
            if(d>p[i-1]&&d<=p[i]){
                printf("%04d-%02d-%02d\n",y,i,d-p[i-1]);
                break;
            }
        }
    }
    return 0;
    
}
