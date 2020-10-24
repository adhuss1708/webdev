#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char name[20];
	int c1,c2,found='n';
	printf("Enter the file name:");
	scanf("%s",name);

	if((fp1=fopen(name,"r"))==NULL)
	{
		printf("File does not exist\n");
		return 0;
	}

	fp2 = fopen("new.c","w");
	c1 = fgetc(fp1);
	c2 = fgetc(fp1);

	while(c2!=EOF)
	{
		if(c1=='/'&&c2=='*')
			found='y';
		if(found='n')
			fputc(c1,fp2);
		if(c1=='*'&&c2=='/')
		{
			found='n';
			c2=fgetc(fp1);
		}

		c1=c2;
		c2=fgetc(fp1);
	}

	fclose(fp1);
	fclose(fp2);

}

