// // Write a program statement to print following on the screen a=5, b=6//
// 1. 5 6
// 2. a=5 and b=6
// 3. a=5 & b=6
// 4. value of a is 5 and value of b is 6.
// 5. sum of 5 and 6 is 11
// 6.5+6=11

#include <stdio.h> //1
int main()
{
    int a = 5;
    int b = 6;
    printf("%d %d", a, b); //5 6
    return 0;
}


#include <stdio.h> //2
int main()
{
    int a = 5;
    int b = 6;
    printf("a=%d and b=%d", a, b); //a=5 and b=6
    return 0;
}

#include <stdio.h> //3
int main()
{
    int a = 5;
    int b = 6;
    printf("a=%d & b=%d", a, b); // a=5 & b=6
    return 0;
}

#include <stdio.h> //4
int main()
{
    int a = 5;
    int b = 6;
    printf("Value of a is %d and Value of b is %d", a, b); // value of a is 5 and value of b is 6.
    return 0;
}


#include <stdio.h> //5
int main()
{
    int a = 5;
    int b = 6;
    int c=a+b;
    printf("Sum of %d and %d is %d", a,b,a+b); // sum of 5 and 6 is 11
    return 0;
}


#include <stdio.h> //6
int main()
{
    int a = 5;
    int b = 6;
    int c=a+b;
    printf("%d + %d =%d",a,b,a+b);//5+6=11
    return 0;
}