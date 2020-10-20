//Program to find biggest line length in a file and no of lines in the file

#include<stdio.h>
   int main()
   {
           FILE *fp = fopen("bll.txt","r");
           if(fp == NULL) {
           printf("file doesn't exist\n");
           return 0;
           }
  
          char ch; int file_size = 0, line = 0, big_line = 0, big_line_length = 0, count = 0;
          while( (ch = fgetc(fp)) != -1 )
          {
                  file_size++;  //every char count
                  count++;  //every line char count
  
                  if(ch == '\n')
                  {
                          line++; //no.of lines increment 
                          if(count > big_line_length)
                          {
                                  big_line = line;
                                  big_line_length = count;
                          }
                                  count = 0;  //for every line count starts from 0.
                  }
          }
  
          printf("file_size = %d\n",file_size);
          printf("no.of lines = %d\n",line);
          printf("big_line = %d  big_line_length = %d\n",big_line,big_line_length);
  }
