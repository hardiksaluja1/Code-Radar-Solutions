#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,isprime =1;
    scanf("%d",&n);
    if(n<2){
        isprime=0;
    }else{
        for(i=2;i<=sqrt(num);i++){
            if(n%2==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("1");
    }else{
        printf("0");
    }
    return 0;

}