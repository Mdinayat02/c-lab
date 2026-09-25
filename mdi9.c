//wap in c which accepts an integer number and print 
#include <stdio.h>

int main() {
    int limit;
    int counter = 1;

    printf("Enter an integer number: ");
    scanf("%d", &limit);

    printf("Printing numbers from 1 to %d:\n", limit);
    while (counter <= limit) {
        printf("%d ", counter);
        counter++;
    }

    printf("\n");
    return 0;
}

 
