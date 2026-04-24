#include <stdio.h>
#include <unistd.h>

int main() {

    // for loop = Repeat some code a limited # of times
    // for(initialization; condition; update)

    // for (int i = 1; i <= 100; i+=2) {
    //     printf("%d\n", i);
    // }
    
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
        sleep(1);
    }

    printf("HAPPY NEW YEAR!\n");

    return 0;
}