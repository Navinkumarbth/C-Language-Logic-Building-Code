#include <stdio.h>
int main()
{
    char x;
    printf("Entar a character");
    scanf("%c", &x);
    if (x >= 'A' && x <= 'Z')
        printf("Uppercase alphabet");
    else if (x >= 'a' && x <= 'z')
        printf("Lowercase");
    else if (x >= '0' && x <= '9')
        printf("Digit");
    else
        printf("Special character");
    return 0;
}