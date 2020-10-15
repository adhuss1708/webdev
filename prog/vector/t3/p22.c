#include<stdio.h>
int fun(char *str)
{
char *ptr=str;
while(*ptr++)
return ptr-str-1;
}
int main()
{
printf("%d",fun("vector"));
}
