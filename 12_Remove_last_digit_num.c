#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    x = x / 10; // Formulla, Remove the last digit number=x/10 //
    printf("Remove th last digit of %d is %d", x);
}