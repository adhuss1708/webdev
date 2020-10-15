#include<stdio.h>
int main()
{
int a=0,b=2,c=2;
*(a?&b:&a)=(a?b:c);
printf("%d %d %d \n",a,b,c);
}
