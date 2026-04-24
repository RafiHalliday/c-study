#include <stdio.h>
#include <stdbool.h>

int getMax(int x, int y) {
    if (x >= y) {
        return x;
    }
    else {
        return y;
    }
}

double cube(double num) {
    return num * num * num;
}

double square(double num) {
    return num * num;
}

bool ageCheck(int age) {
    return age >= 18;
}

int main() {

    // double x = square(2);
    // double y = square(3);
    // double z = square(4);
    double x = cube(2);
    double y = cube(3);
    double z = cube(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    int age = 12;

    if (ageCheck(age)) {
        printf("You may sign up\n");
    }
    else {
        printf("You must be 18+ to sign up\n");
    }

    int max = getMax(2, 3);
    printf("%d\n", max);

    return 0;
}