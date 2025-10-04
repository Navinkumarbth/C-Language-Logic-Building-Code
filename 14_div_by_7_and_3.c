#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if (x % 7 == 0 || x % 3 == 0)
    {
        printf("Divisible by 7||3");
    }
    else
    {
        printf("Not divisible by 7||3");
    }
    return 0;
}