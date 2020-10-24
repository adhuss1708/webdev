#include<stdio.h>
int main(int argc,char *argv[])
   	{
           if(argc != 2) {
           printf("Usage : ./a.out file\n");
           return 0;
           }
   
          int x;
	  x = remove(argv[1]); //removes the file from the directory.
  
          if(x == 0)
          printf("The file is removed\n");
          else
          printf("The file does not exist\n");
  	}
