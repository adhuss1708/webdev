#include<stdio.h>
#include<string.h>

char *ustrchr(const char *,int);

int main()
{
	char str[20],ch,*p;
	int cnt=0,i;
printf("Enter the string:\n");
gets(str);
printf("Enter character to search:\n");
scanf("%c", &ch);
ustrchr(str,ch);
if(p)
{
printf("Found at %p in string %s", p,str);
}
else
printf("Character not found\n");
}

char *ustrstr(const char *s, int c)
{
int i;
for(i=0;s[i];i++)
{
	if(s[i]==c)
	return s+i;
}

return NULL;

}
