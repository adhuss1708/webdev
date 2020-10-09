//Read a file data more than once -  rewind()

#include<stdio.h>
   int main(int argc, char *argv[])
   {
           if(argc != 2)  {  // no.of arguments must be 3
           printf("Usage : ./a.out src_file \n");
           return 0;
           }
   
          FILE *fs = fopen(argv[1],"r");
  
          if(fs == NULL) {
          printf("src_file doesn't exist\n");
          return 0;
          }
  
          //  FILE *fd = fopen(argv[2],"w");
  
          char ch;
	int i;
for(i=0;i<3;i++)
{

          while( (ch = fgetc(fs)) != EOF )          //read char by char from the file 
        printf("%c",ch);
	printf("\n");

	rewind(fs); 
}

	// fputc(ch,fd); //write char by char into a fil
         // fclose(fs); //close source file
         // fclose(fd); //close destination file. 
  }

