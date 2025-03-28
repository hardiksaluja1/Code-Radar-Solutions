#include<stdio.h>
int main(){
    int n,arr[],i,j;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        for(j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]);
            swap(arr[j],arr[j+1]);
        }
        printf("\n");
    }
    return 0;
}