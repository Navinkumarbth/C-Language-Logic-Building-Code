#include<stdio.h>
int length(char*p);
int main ()
{
    int l;
    char str[10];
    fgets(str,10,stdin);
    l=length(str);

}
int length(char*p)
{
    int i;
    for(i=0; *(p+i); i++)
    return i;
}