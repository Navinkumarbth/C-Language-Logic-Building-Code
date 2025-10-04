#include <stdio.h>
int main()
{
    int a[100], sum = 0, i;
    float avg;
    printf("Enter 100 numbers:");
    for (i = 0; i <= 99; i++)
        scanf("%d", &a[i]);
   
    sum = sum + a[i];
    avg = sum / 100.0;
    printf("Average is %f", avg);
    return 0;
}