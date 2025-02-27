#include<stdio.h>
int main(){
    int n,i,j,b;
    scanf("%d",&n);
    b=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d", j*b);
        }
        printf("\n");
    }
    b++;
}