#include<stdio.h>
int main()
{
static int a[]={0,1,2,3,4};
static int *p[]={a+4,a+3,a+2,a+1,a};
int **ptr;
ptr=p;
**ptr++;
printf("%d %d %d",ptr-p,*ptr-a,**ptr); *++*ptr;
printf("%d %d %d",ptr-p,*ptr-a,**ptr);
++**ptr;
printf("%d %d %d",ptr-p,*ptr-a,**ptr);
}
