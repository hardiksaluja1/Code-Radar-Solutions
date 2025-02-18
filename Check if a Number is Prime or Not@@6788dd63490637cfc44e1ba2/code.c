#include<stdio.h>
int is_prime(int n){
    if(n<2)
        return 0;
    for(i=2,i<=n/2,i++){
        if(n%i==0)
        return 0;
    }
    return 1;
    }
int main(){
    int num;
    scanf("%d",&num);
    if(is_prime(num)){
        printf("Prime");;
    }
    else{
        printf("Not Prime");
    }
    return 0;
}