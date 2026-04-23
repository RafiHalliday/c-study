#include <stdio.h>
#include <stdbool.h>

int main () {

    // variable = reusable container for a value
    // int = whole number
    // float = single precise number
    // double = double precise number
    // char = single character
    // char [] = string
    // bool = true/false

    int age = 25;
    int year = 2025;
    int quantity = 2;

    float gpa = 4.0;
    float price = 19.99;
    float temperature = -10.5;

    // 15 digits ok
    // 20 digits lost precision
    double pi = 3.1415926535897932384;
    double e = 2.71828182845904523536;

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    char name[] = "Bro Code";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    bool isOnline = true;
    bool isStudent = true;
    bool forSale = false;

    printf("You are %d years old\n", age);
    printf("in AD %d\n", year);
    printf("You have ordered %d product\n\n", quantity);

    printf("Your GPA is %.2f\n", gpa);
    printf("The price is is $%.2f\n", price);
    printf("The temperature is %.2f degree Celsius\n\n", temperature);

    printf("The value of pi is %.20lf\n", pi);
    printf("The value of e is %.20lf\n\n", e);

    printf("Your grade is %c\n", grade);
    printf("Your symbol is %c\n", symbol);
    printf("The currency is %c\n\n", currency);

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n\n", email);

    if (isOnline) {
        printf("You are online\n");
    } else {
        printf("You are offline\n");
    }
    printf("%d\n", isOnline);

    if (isStudent) {
        printf("You are a student\n");
    } else {
        printf("You are not a student\n");
    }

    if (forSale) {
        printf("Item is for sale\n");
    } else {
        printf("Item is not for sale\n");
    }

    return 0;
}