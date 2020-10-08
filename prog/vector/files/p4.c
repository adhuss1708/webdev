//fputc

#include<stdio.h>
int main()
{
	FILE *fp = fopen("data.txt", "w"); //no need to chefck file exists or not
					   //fputc truncates existing file to zero or creates a new file

	char ch;
	fputc('A',fp);
	fputc('B',fp);
	fputc('C',fp);

	printf("\n");
}

