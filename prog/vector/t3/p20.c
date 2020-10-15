#include<stdio.h>
int main() 
{ 
char str[]="Geneius";
print (str);
}
print(char *s)
{
if(*s) print(s++);
printf("%c",*s);
}
