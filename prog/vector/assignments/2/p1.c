#include<stdio.h>
#include<string.h>

char *ustrcmp(char *,char *)

int main()
{
	char str1[20],str[20];
	printf("Enter the first string:\n");
	gets(str1);
	printf("Enter the second string:\n");
	gets(str2);

	char *p = ustrcmp(str1,str2);

	if(p==0)
	printf("The string are equal\n");
	else
	printf("The strings are not equal\n");

}

char *ustrcmp(char *str1,char *str2)
{
	while(*str1!='\0' && *str2!='\0' && *str1==*str2)
	{
		str1++;
		str2++;
	}

	if(*str1==*str2)
	return 0;

	else
	return(*str1 - *str2);
}
	
