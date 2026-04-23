#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x = 9;

    x = sqrt(x);
    printf("%d\n", x);

    x = pow(x, 2);
    printf("%d\n", x);
    
    float y = 3.14;
    y = round(y);
    printf("%f\n", y);
    
    y = 3.14;
    y = ceil(y);
    printf("%f\n", y);
    
    y = 3.14;
    y = floor(y);
    printf("%f\n", y);

    int z = -3;
    z = abs(z);
    printf("%d\n", z);
    
    float v = log(z);
    printf("%f\n", v);

    y = sin(x);
    printf("%f\n", y);

    y = cos(x);
    printf("%f\n", y);

    y = tan(x);
    printf("%f\n", y);

    return 0;
}