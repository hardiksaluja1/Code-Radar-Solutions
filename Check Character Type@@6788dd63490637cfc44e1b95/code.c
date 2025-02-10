#include <stdio.h>

int main() {
    char x ;
    scanf("%c",&x);
    if(x=='a'||x=='i'||x=='e'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U');
    printf("Vowel");
    else if(isalpha(x)){
        printf("Consonant");
    }else if (isdigit(x)) {
        printf("Digit");
    }else{
        printf("Special Character");
    }
   
   
    return 0;
}