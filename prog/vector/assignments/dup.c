#include<stdio.h>
#include<ctype.h>
  
int main(int argc, char *argv[]) 
{ 
	if(argc!=2)
	{
		printf("Usage ./a.out word\n");
		return 0;
	}
    // initializing the file pointer 
    FILE* fptr; 
  
    // name of the file as sample.txt 
    char file[50] = { "data.txt" }; 
    char ch; 
  
    // opening the file in read mode 
    fptr = fopen(file, "r"); 
    ch = fgetc(fptr); 
  
    // converting into upper case 
    while (ch != EOF) { 
  
        // converting char to upper case
	if(ch>='a'&& ch<='z')
	{

		ch = toupper(ch); 
		printf("%c", ch); 
		ch = fgetc(fptr);
	}	
    } 
  
    // closing the file 
    fclose(fptr); 
  
    return 0; 
} 
