#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    x = x % 10; // Formulla, find out the last digit number=x%10 //
    printf("The last digit of %d is %d\n", x);

    return 0;
}