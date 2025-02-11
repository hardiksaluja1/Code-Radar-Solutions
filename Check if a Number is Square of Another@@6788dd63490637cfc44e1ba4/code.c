#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // Corrected scanf to properly read two integers
    
    if (b * b == a) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}
