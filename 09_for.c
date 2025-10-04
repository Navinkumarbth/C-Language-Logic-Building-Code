#include <stdio.h>
int main()
{
    int i, x;
    for (i = 1; i < 3; i++)
    {
        printf("\nEnter an even number");
        scanf("%d", &x);
        if (x % 2 == 0)
            break;
    }
    if (i == 4)

        printf("Game over");
    else
        printf("You win");
    
    return 0;
}