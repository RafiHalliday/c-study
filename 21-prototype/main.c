#include <stdio.h>
#include <stdbool.h>

// prototypes gather up here
void hello(char name[], int age);
bool ageCheck(int age);

int main() {

    // function prototype = Provide compiler w/ information about a functions:
    // name, return type, and parameters before its actual definition.
    // Enables type checking and allows functions to be used before they're defined
    // Improves readability, organization, and helps prevent errors

    hello("Spongebob", 30);
    if (ageCheck(30)) {
        printf("You are old enough to work at the Krusty Krab\n");
    }
    else {
        printf("You must be 16+ to work at the Krusty Krab\n");
    }

    return 0;
}

// complete function down here, organized
void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age) {
    return age >= 16;
}