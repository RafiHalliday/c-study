#include <stdio.h>

// int result = 0; // global scope (hard to debug)

int add(int x, int y) {
    int result = x + y;
    return result;
}

int subtract(int x, int y) {
    int result = x - y;
    return result;
}

int main() {

    // variable scope = where a variable is recognized and accessible
    // variables can share the same name if they're in different scopes {}

    int x = 5;
    int y = 6;

    int result = 0;

    result = add(x, y);
    printf("%d\n", result);

    result = subtract(x, y);
    printf("%d\n", result);

    return 0;
}