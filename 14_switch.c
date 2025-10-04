#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    switch (x)
    {
    case 1 ... 10:
        printf("Sunday\n");
    case 11 ... 20:
        printf("Monday\n");
        break;
    case 21 ... 30:
        printf("Tuesday\n");
    case 31 ... 40:
        printf("Wednesday\n");
    }
    printf("Outside switch\n");
    return 0;
}   