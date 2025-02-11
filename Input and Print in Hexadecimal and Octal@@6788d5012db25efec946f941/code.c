#include<stdio.h>

int main() {
    int a;
    
    // Take input from user
    scanf("%d", &a);
    
    // Print the hexadecimal and octal representations
    printf("Hexadecimal: %x\n", a); // Print in hexadecimal
    printf("Octal: %o\n", a);       // Print in octal
    
    return 0;
}
