 //write a program to understand the functions of fgets() and fputs().
   #include<stdio.h>
   int main()
   {       
           char str[50];
           int n;
           FILE *fp = fopen("data.txt","r");
           
            if(fp == NULL) { 
          printf("file doesn't exist\n");
          return 0;
          }
          
          printf("Enter the n value to read no.of bytes of string\n");
          scanf("%d",&n);
          
          fgets(str,n,fp);  //reads n-1 no.of bytes from file stores into str array.
          printf("str = %s\n",str);
          
          fclose(fp);  //closes the file from read mode.
          
          fp = fopen("temp","w");  //opens the file in write mode.
          fputs(str,fp); //writes the string data into a file.
          
          fclose(fp);  //closes the file from write mode.
  }
