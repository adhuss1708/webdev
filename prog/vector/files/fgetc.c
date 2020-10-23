#include<stdio.h>
int main()
{
	FILE *fp = fopen("data.txt","r");

	if(fp==NULL)
	{
		printf("File doesnt exist \n");
		return 0;
	}

	char ch;
//	ch = fgetc(fp);   // to print only one character


	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c", ch);
		
	}
	fclose(fp);

}

