#include <stdio.h>

int main() {
    int i = 2;

    printf("Even numbers up to 10:\n");
    
    while (i <= 10) {
        printf("%d ", i);
        i += 2; 
    }

    return 0;
}

