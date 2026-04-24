#include <stdio.h>
#include <string.h>

int main() {

    // Array of Strings

    char fruits[][10] = {
        "Apple",
        "Banana",
        "Coconut",
        "Pineapple",
    };

    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'A';
    
    fruits[1][0] = 'a';
    fruits[1][5] = 'B';
    
    fruits[2][0] = 't';
    fruits[2][6] = 'C';
    
    fruits[3][0] = 'e';
    fruits[3][8] = 'P';
    
    
    for (int i = 0; i < size; i++) {
        printf("%s\n", fruits[i]);
    }
    
    char names[3][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);
    
    for (int i = 0; i < rows; i++) {   
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    
    for (int i = 0; i < rows; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}