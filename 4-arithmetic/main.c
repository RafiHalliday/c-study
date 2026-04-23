#include <stdio.h>

int main() {
    // arithmetic operators = + - * / % ++ --

    int x = 10;
    int y = 2;
    int z = 0;

    // z = x + y;
    // printf("%d\n", z);
    // z = x - y;
    // printf("%d\n", z);

    // z = x * y;
    // printf("%d\n", z);
    // z = x / y;
    // printf("%f\n", z);
    
    // modulus
    z = x % y;
    printf("%d\n", z);

    // increment
    x++;
    printf("%d\n", x);
    
    // decrement
    x--;
    printf("%d\n", x);
    
    // augmented assignment operator
    x += 2;
    printf("%d\n", x);
    
    x -= 3;
    printf("%d\n", x);
    
    x *= 3;
    printf("%d\n", x);
    
    x /= 3;
    printf("%d\n", x);


    return 0;
}