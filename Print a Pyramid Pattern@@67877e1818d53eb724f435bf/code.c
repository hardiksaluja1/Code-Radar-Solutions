#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2n+2;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}