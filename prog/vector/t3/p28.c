#include<stdio.h>
int main() 
{ char a[5][5],flag; 
a[0][0] = 'A'; 
flag=((a==*a)&&(*a==a[0])); 
printf("%d",flag);
 }
