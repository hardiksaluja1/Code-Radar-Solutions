#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n;j++){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}