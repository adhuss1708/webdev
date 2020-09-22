#include<stdio.h>
#include<string.h>

int main()

{
	char str[20];
	int i;
	printf("Enter the string:");
	scanf("%s", str);
	while(str[i]!='\0')
	{
		if(str[i]>=65&&str[i]<=90)
			str[i]+=32;
		else
			str[i]-=32;
		i++;
	}
	
	printf("The changed string is %s\n", str);

}


