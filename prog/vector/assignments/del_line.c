#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("usage ./a.out line \n");
		return 0;
	}

	FILE *f1,*f2;
	char file[20],ch;
	int del_line,temp=1;
	printf("Enter the file name to open:");
	scanf("%s", file);
	f1=fopen(file,"r");

	while((ch=fgetc(f1))!=EOF)
	{
		printf("%c",ch);
		rewind(f1);
	}
	
	f2=fopen("new.txt","w");
	while((ch=fgetc(f1))!=EOF)
	{
		if(ch=='\n')
			temp++;
		if(temp!=(atoi(argv[1])))
			putc(ch,f2);
	}

	fclose(f1);
	fclose(f2);

	remove(file);
	rename("new.txt",file);

	f1=fopen(file,"r");
	while((ch=fgetc(f1))!=EOF)
	printf("%c",ch);
fclose(f1);
return 0;
}

