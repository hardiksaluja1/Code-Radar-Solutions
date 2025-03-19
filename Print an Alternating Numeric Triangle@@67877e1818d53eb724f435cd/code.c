#include<stdio.h>
int main(){
   int n;
   int l=1;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    if(i%2=0){
        l=0;
    }
    for(int j=0;j<n;j++){
        printf("%d ",l);
        l==0?l=1:l=0;
    }
    printf("\n");
   }
    return 0;
}