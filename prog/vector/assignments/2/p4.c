#include<stdio.h>
#include<string.h>

char *ustrrchr(const char *,int);

int main()
{
	char str[20],ch,*p=0;
	int i;
printf("Enter the string:\n");
gets(str);
printf("Enter character to find least occurence in (%s):\n",str);
scanf("%c", &ch);
p = ustrrchr(str,ch);
if(p!=0)
{
printf("Base address: %p\n",str);
printf("Last occurence of character is:%p\n",p);
}
else
printf("There is no last occurence of character found in the string\n");
}

char *ustrrchr(const char *str, int ch)
{
char *p = NULL;
int i;
for(i=0;s[i];i++)
{
	if(str[i]==ch)
{
	p = str + i;
}

}
return p;

}
