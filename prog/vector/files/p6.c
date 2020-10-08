//Write a prog to read data from keyboard and store it into a file

#include<stdio.h>
int main()
{
	char ch;
	FILE *fp = fopen("data.txt", "w");
	printf("Enter the char:\n");
	while((ch = getchar()) !=EOF) // ctrl+d to stop data input for getchar()
		//printf("%c", ch);
		fputc(ch,fp);

	fclose(fp);

	fp = fopen("data.txt","r"); //opening to check file in read mode
	while((ch = fgetc(fp))!=EOF)
		printf("%c",ch);
	printf("\n");

}
