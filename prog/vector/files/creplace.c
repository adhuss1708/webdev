   #include<stdio.h>
   #include<stdlib.h>
   int main(int argc,char *argv[])
   {
           if(argc != 4) {  //no.of argumets must be 4
           printf("Usage : ./a.out file ch1 ch2\n");
           return 0;
           }
  
          FILE *fp = fopen(argv[1],"r"); //opens the file in read mode.
  
          if(fp == NULL) { //checking the file is exist or not.
          printf("file doesn't exist\n");
          return 0;
          }
  
          char ch;     int count = 0;
          while( (ch = fgetc(fp)) != -1)  //reads the file data char by char
          count++; //finding the file size
          rewind(fp); // resets the file position indicator to start position.
  
          char *p = (char *)malloc(count*sizeof(char)+1); //allocates char array memory dynamically
          int i = 0;
  
          while( (ch = fgetc(fp)) != -1) //reads file data char by char
          p[i++] = ch; //copies char by char into DMA array 
          p[i] = '\0';
	  char c1,c2;
          c1 = *argv[2],  c2 = *argv[3];
          for(i=0;p[i];i++)
          {
                  if(p[i] == c1) //checking char is matched or not.
                  p[i] = c2; //replace char if it is matched.
          }
  
          fclose(fp); //closes the file from read mode.
          fp = fopen(argv[1],"w"); //re-opens the file in write mode.
  
          for(i=0;p[i];i++)
          fputc(p[i],fp); //writes char by char from char array into file.        
  
          fclose(fp); //closes the file from write mode.
  }

