#include <stdio.h>
#include <stdbool.h>

int main() {

    int temp = 20;

    // if (temp > 0 && temp < 30) {
    //     printf("The temperature is GOOD\n");
    // }
    // else {
    //     printf("The temperature is BAD\n");
    // }

    if (temp <= 0 || temp >= 30) {
        printf("The temperature is BAD\n");
    }
    else {
        printf("The temperature is GOOD\n");
    }

    bool isSunny = true;

    // if (isSunny) {
    //     printf("It is SUNNY outside\n");
    // }    
    // else {
    //     printf("It is CLOUDY outside\n");
    // }

    if (!isSunny) {
        printf("It is CLOUDY outside\n");
    }    
    else {
        printf("It is SUNNY outside\n");
    }

    return 0;
}