#include <stdio.h>

int main() {
    // format specifier = special tokens beginning with %
    // follow by a character that specifies the data
    // and optional modifiers (width, precision, flags)
    // control how data is displayed or interpreted

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535897932384;
    char currency = '$';
    char name[] = "Bro Code";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    printf("\n");
    
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;
    
    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);
    printf("%+4d\n", num1);
    printf("%+4d\n", num2);
    printf("%+4d\n", num3);
    
    printf("\n");
    
    // precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("$%+7.2f\n", price1);
    printf("$%+7.2f\n", price2);
    printf("$%+7.2f\n", price3);

    return 0;
}