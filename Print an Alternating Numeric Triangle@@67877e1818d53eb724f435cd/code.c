#include<stdio.h>
int main(){
   int n;
   int l=1;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    if(i%2==0){
        l=0;
    }
    else{
        l=1;
    }
    for(int j=0;j<i;j++){
        printf("%d ",l);
        if(l==0){
            l=1;
        }
        else{
            l=0;
        }
    }
    printf("\n");
   }
    return 0;
}