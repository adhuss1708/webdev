#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("data.txt","r");
 	
	if(fp == NULL)
		printf("File does not exist\n");
	else
		printf("File exisits\n");

}
