#include<stdio.h>
#include<string.h>
int main()
{
	char a1[50],a2[50];
	int i,j=0,k,c=0,d=0;
	int n1,n2;
	printf("enter a string\n");
	gets(a1);
	printf("enter the word to hide\n");
	gets(a2);

	n1=strlen(a1);
	n2=strlen(a2);

	for(i=0;i<n1;i++)
	{
             if(a1[i]==a2[j])
             {
                         for(j=1;j<n2;j++)
                         {
                                     if(a1[i+j]!=a2[j])
                                     {
                                                 break;
                                     }
                         }
                         if(a2[j]=='\0')
                         {
                                     for(k=0;k<n2;k++)
                                     {
                                                 a1[i]='-';
                                                 i++;
                                     }
                         }
             }
             j=0;
}
 printf("\n%s\n",a1);
}


