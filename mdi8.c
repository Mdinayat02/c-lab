#include <stdio.h>

int main() {
    int i = 1;

    printf("Odd numbers up to 10:\n");
    
    while (i <= 10) {
        printf("%d ", i);
        i += 2; 
    }

    printf("\n");
    return 0;
}

