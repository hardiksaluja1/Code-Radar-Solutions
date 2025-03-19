#include<stdio.h>
int main(){
    int n,i,j,product=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        product *= i;
        printf("%d x %d = %d",i,j,product);
    }
    printf("\n");
    }
    return 0;
}