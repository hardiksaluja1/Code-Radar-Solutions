#include<stdio.h>
int n,i,j;
void fibonacci(int n){
int first =0,second = 1,next;
if(n>=1){
    printf("%d",first);
}
if(n>=2){
    printf("%d",second);
}
for(i=3;i>=n;i++){
    next = first + second;
    printf("%d",next);
    first = second;
    second = next;
}
}
int main(){
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}



