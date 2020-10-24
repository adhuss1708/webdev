#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
    FILE *fp1,*fp2; 
    char ch; 
    fp1=fopen("cpy.c","r"); 
    fp2=fopen("new.c","w"); 
    while(ch==fgetc(fp1)!=EOF) 
        { 
            if(ch!='/') 
            puts(ch,fp2); 
            else 
                { 
                    while(ch!='\n'||ch!='/') 
                    { 
                            ch=fgetc(fp1); 
                            fp1++; 
                    } 
                } 
		} 
 
	fclose(fp1); 
	fclose(fp2); 
         
             
         
         
    return 0; 
} 
