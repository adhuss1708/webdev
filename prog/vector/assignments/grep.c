#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])  
{
	if(argc != 3) 
	{
		printf("Usage : ./grep word file\n");
		return 0;
	}

	FILE *fp = fopen(argv[2],"r"); // file in read mode.

	if(fp == NULL) 
	{
		printf("%s : No such file or directory\n",argv[2]);
		return 0;
	}
	char ch;
	int count = 0, big_line_length = 0;
	while((ch = fgetc(fp)) != EOF) //reads file char by char
	{
		count++; //find length of each line
		if(ch == '\n')
		{
			if(big_line_length < count)
				big_line_length = count;  //update big_line.
		}
		count = 0;
	}

	rewind(fp);  //resets the file position indicator to start position.
	char *buf =   (char *)malloc(big_line_length*sizeof(char));

	while(fgets(buf,big_line_length,fp) != NULL) //reads line by line.
	{
		if(strstr(buf,argv[1]) != NULL)
			printf("%s\n",buf);
	}
}
