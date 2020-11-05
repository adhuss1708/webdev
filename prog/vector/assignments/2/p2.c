#include<stdio.h>
#include<string.h>

char *my_strstr(char *,char *)

int main()
{
	char m[20],s[20];
	int i,j;
	
	printf("Enter the main string and sub string:\n");
	scanf("%s%s",m,s);

	char *p = strstr(m,s);
	if(p!=NULL)
	printf("Sub string is found\n");
	else
	printf("Sub string is not found\n");
}

char *my_strstr(char *m,char *s)
{
	int i,j;

	for(i=0;m[i];i++)
	{
		if(s[0]==m[i])
		{
			for(j=1;s[j];j++)
			{
				if(s[j]==m[i+j])
				continue;	
				else break;
			}
		if(s[j]=='\0')
		return m+i;
		}
	}

return NULL;

}

