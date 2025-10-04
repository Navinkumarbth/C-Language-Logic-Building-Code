#include<stdio.h>
int main(){
    int c=10, b=22, a=9;
    if(a>=b)
    {
        if(a>=c)
        printf("%d is largest number",a);
        else
        printf("%d is largest number",c);
    }

    else
    {
        if(a>=c)
        printf("%d is largest number",b);

        else
        printf("%d is largest number",c);
    }
    return 0;

}