#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[100],word[20],arr[10][30];
	int i=0,j=0,k=0,len1,len2;

	printf("Enter the string:\n");
	gets(str);

	printf("Enter the word to be deleted:\n");
	gets(word);

//	len1 = strlen(str);
//	len2 = strlen(word);


	for(i=0;str[i]!='\0';i++)  // storing the string in 2D array 
	{
		if(str[i]==' ')
		{
			arr[j][k] = '\0';
			j++;
			k=0;
		}
		else
		{
			arr[j][k] = str[i];
			k++;
		}
	}

	arr[j][k] = '\0';
 
	k = 0;
	for (i=0;i<j+1;i++)
	{
		if(strcmp(arr[i],word) == 0)
		{
			arr[i][k] = '\0';
		}
	}
 
	k = 0;
 
	for (i=0;i<j+1;i++)
	{
		if (arr[i][k] == '\0')
			continue;
		else
			printf("%s", arr[i]);
	}
 
	printf ("\n");
 
	return 0;
}
