#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,prime =1;
    scanf("%d",&n);
    if(n<2){
        prime=0;
    }else{
        for(i=2;i<=sqrt(num);i++){
            if(n%2==0){
                prime=0;
                break;
            }
        }
    }
    if(prime){
        printf("1");
    }else{
        printf("0");
    }
    return 0;

}