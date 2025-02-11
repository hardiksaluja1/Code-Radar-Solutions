#include<stdio.h>
int main(){
    int a,b,s,m,sb,d;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    s = a+b;
    m=a*b;
    sb=a-b;
    d=a/b;
    if(c=='+'){
        printf("%d",s);
    }
    else if(c=='-'){
        printf("%d",sb);
    }
    else if(c=='*'){
        printf("%d",m);
    }
    else if(c=='/'){
        printf("%d",d);
    }
    else{
        printf("error");
    }
    return 0;

}