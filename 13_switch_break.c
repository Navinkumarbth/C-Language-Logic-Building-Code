#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    switch (x)
    {
    case 5:
        printf("Sunday\n");
    case 8:
        printf("Monday\n");
        break;
    case 9:
        printf("Tuesday\n");
    case 36:
        printf("Wednesday\n");
    }
    printf("Outside switch\n");
    return 0;
}   