//fputc

#include<stdio.h>
int main()
{
	FILE *fp = fopen("data.txt", "w"); //no need to chefck file exists or not
					   //fputc truncates existing file to zero or creates a new file

	int ch;
//	fputc('A',fp);
//	fputc('B',fp);
//	fputc('C',fp);
	
	printf("Enter the text:");
	while((ch=getchar()) != EOF)
	fputc(ch,fp);
	
	fclose(fp);
}

