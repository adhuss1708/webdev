#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	printf("Enter the string to be checkd:");
	scanf("%s", str);
	int j=strlen(str)-1;
	int i,flag;

	while(i<=j)
	{
		if(str[i]==str[j])
			flag=1;
		else
		{
			flag=0;
			break;
		}

		i++;
		j--;

	}

	if(flag==1)
		printf("The string is a pallindrome");
	else
		printf("The string is not a pallindrme");


}


