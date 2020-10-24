#include<stdio.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{
	int character_count = 0;
           int space_count = 0;
           int word_count = 0;
           int line_count = 0;
           char ch;

           FILE *fp;

           if(argc == 0)
           {
   		printf("Usage ./a.out filename \n");
                      exit(0);
           }

            if(fp != 0)
           {
                       printf("No such file or directory\n");
                       exit(0);
           }
           fp = fopen(argv[1],"r");

           while((ch=fgetc(fp))!=EOF)
           {
                       character_count++;
                       if(ch == ' ')
                       {
                             space_count++;
                             word_count++;
                       }
                       if(ch == '\n')
                       {
			line_count++;
                       }
           }
           printf("No of characters = %d\n",character_count);
           printf("No of spaces = %d\n",space_count);
           printf("No of words = %d\n",word_count+1);
           printf("No of lines = %d\n",line_count);


}
