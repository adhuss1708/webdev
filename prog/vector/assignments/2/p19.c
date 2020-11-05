#include<stdio.h>
#include<string.h>

int main()
{
char str[30];
int count=0,i=0;
printf("Enter the string:\n");
gets(str);

while(str[i]!='\0')
{
	if(str[i]==32)
	{
		count ++;
		i++;
	}
}

	if(str[i]=='\0')
	count++;

	printf("The number of words in a line is: %d", count);
}

