#include<stdio.h>
int main(int argc ,char *argv[])
 { 
if(argc==1) 
{
 printf("error"); 
 exit(1);
 }
 while(**argv,--argc) 
{
 printf("%s",*++argv);
 while(argc,**argv)
 { 
printf("%c\n",*(*argv)++);
 } 
putchar("\n");
 }
 } 
