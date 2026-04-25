#include <stdio.h>

void birthday(int* age);

int main() {

    // pointer = a variable that stores the memory address of another variable
    // benefit: help avoid wasting memory by allowing you to use
    //          the address of a large data structure instead of copying the whole
    //          data

    int age = 25;
    int *pAge = &age;

    printf("%p\n", &age);
    printf("%p\n", pAge);

    // birthday(pAge);
    birthday(&age);
    printf("You are %d years old\n", age);

    return 0;
}

void birthday(int* age) {
    // pass by reference
    // force operator precedence
    (*age)++;
}