#include <stdio.h>
int main()
{
    char str[20];

    printf("Enter your name");
    gets(str);
    printf("%s", str);
    
    return 0;
}