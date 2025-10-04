
#include <stdio.h>
int main()
{
    int i = 10;
    while (i)
    {
        printf("%d", i);
        i - 1; //Output is infinite //
    }
    return 0;
}