#include <stdio.h>
int main()
{
    int a, b;
    // Input the values of a and b
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a=%d, b=%d\n", a, b);

    // Swapping without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a=%d, b=%d\n", a, b);
    return 0;
}
