//Copy command execution

#include<stdio.h>
   int main(int argc, char *argv[])
   {
           if(argc != 3)  {  // no.of arguments must be 3
           printf("Usage : ./a.out src_file dest_file\n");
           return 0;
           }
   
          FILE *fs = fopen(argv[1],"r");
  
          if(fs == NULL) {
          printf("src_file doesn't exist\n");
          return 0;
          }
  
          FILE *fd = fopen(argv[2],"w");
  
          char ch;
          while( (ch = fgetc(fs)) != EOF ) //read char by char from the file 
          fputc(ch,fd); //write char by char into a file
  
          fclose(fs); //close source file
          fclose(fd); //close destination file.
  }

