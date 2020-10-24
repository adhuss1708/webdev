#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(int argc, char*argv[])
{
	if(argc!=2)
	{
		printf("Usage ./a.out word \n");
		return 0;
	}

	FILE *fp = fopen("data.txt","r");

	if(fp==NULL)
	{
		printf("File does not exist\n");
		return 0;
	}

	char ch;

	while((ch=fgetc(fp))!=EOF)
	{
		if((ch==argv[1]) && (islower(ch)==0))
		{
			ch = toupper(ch);
			printf("%c",ch);
			ch = fgetc(fp);
		}
	}

	fclose(fp);

}
