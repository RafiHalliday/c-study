#include <stdio.h>

typedef int Number ;
typedef char String[50];
typedef char Initials[3];

int main() {

    // typedef existing_type new_name;

    int x = 3;
    int y = 4;
    int z = x + y;
    printf("%d\n", z);

    String name = "Bro Code";
    printf("%s\n", name);

    Initials user1 = "BC";
    Initials user2 = "SS";
    Initials user3 = "PS";
    Initials user4 = "ST";
    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}