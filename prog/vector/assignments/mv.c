#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	if(argc!=3)
	{
		printf("Usage mv /source /dest \n");
		return 0;
	}

	FILE *fs = fopen(argv[1],"r");

	if(fs==NULL)
	{
		printf("Source file does not exist\n");
		return 0;
	}
	
	FILE *fd = fopen(argv[2],"w");

char ch;
while((ch=fgetc(fs))!=EOF)
fputc(ch,fd);
fclose(fs);
fclose(fd);


