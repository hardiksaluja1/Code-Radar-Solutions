#include <stdio.h>
int main(){
    char a[100];
    int b;
    char c[100];
    scanf("%s\n%d\n%s\n",&a,&b,&c);
    printf("Name: %s",a);
    printf("Age: %d",b);
    printf("Hobby: %s",c);
    return 0;
}