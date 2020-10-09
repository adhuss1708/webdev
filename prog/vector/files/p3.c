//To check whether a file is present or not
//fgetc

#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Usage: ./a.out filename\n");
	}

	FILE *fp;
	fp = fopen(argv[1], "r");

	if(fp == NULL)
	{
		printf("File not found");
		return -1;
	}

	char ch;
	ch = fgetc(fp); // Printing char by char from the file
	printf("%c",ch);

	while((ch = fgetc(fp)) !=EOF) //Reading all characters from file one by one 
	printf("%c",ch);//Printing whole file
	printf("\n");

}
