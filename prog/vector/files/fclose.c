//fclose()

#include<stdio.h>
int main()
{
	FILE *fp = fopen("data.txt", "w"); //no need to chefck file exists or not
					   //fputc truncates existing file to zero or creates a new file

	char ch;
	fputc('A',fp);
	fputc('B',fp);
	fputc('C',fp);
	fputc('Z',fp);

	printf("\n");
	
//	printf("Infinite loop\n");
//	while(1);

	fclose(fp); // file stream is closed  data is saved succesfully

}

