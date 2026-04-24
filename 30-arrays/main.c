#include <stdio.h>

int main() {

    // array = a fixed-size collection of elements of the same data type
    // similar to a variable but it holds more than 1 value

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Bro Code";
    
    numbers[0] = 100;
    numbers[1] = 90;
    numbers[2] = 80;
    numbers[3] = 70;
    numbers[4] = 60;
    
    // printf("%d\n", numbers[0]);
    // printf("%d\n", numbers[1]);
    // printf("%d\n", numbers[2]);
    // printf("%d\n", numbers[3]);
    // printf("%d\n", numbers[4]);
    
    // printf("%c\n", grades[0]);

    // for (int i = 0; i < 5; i++) {
    //     printf("%c\n", grades[i]);
    // }
    
    // for (int i = 0; i < 8; i++) {
    //     printf("%c", name[i]);
    // }
    
    printf("%zu\n", sizeof(numbers));
    printf("%zu\n", sizeof(numbers[0]));
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}