#include<stdio.h>
#include<stdlib.h>

void check_comment(char);
void incomment();
void single_comment();

char c,d;
FILE *fp ,*fp1;


int main (int argc, char** argv)
{
    fp = fopen(argv[1],"r+");
    fp1 = fopen(argv[2],"w");


    if(fp == NULL)
    {
        perror("Error has occured");
        printf("Error occured.\n");
        exit(0);
    }
    fp1 = fopen(argv[2],"w");

    if(fp1 == NULL)
    {
        perror("Error has occured");
        printf("Error occured.\n");
        exit(0);
    }

    while((c = fgetc(fp)) != EOF)
    {
        check_comment(c);

    }

    fclose(fp);
    fclose(fp1);
}

void check_comment(char c)
{
    if (c == '/')
    {
        if((d = fgetc(fp)) == '*' )
		 {
            incomment();
        }
        else if(d == '/')
        {
            single_comment();
        }
        else
        {
            fputc(c,fp1);
            fputc(d,fp1);
        }
    }
    else
    {
        fputc(c,fp1);
        fputc(d,fp1);
    }
}
void incomment()
{
    c = fgetc(fp);
    d = fgetc(fp);

    while(c == '*' || c == '/')
    {
        c = d;
        d = fgetc(fp);
    }
}

void single_comment()
{
    int c,d;
    while((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
            return;
    }
}
