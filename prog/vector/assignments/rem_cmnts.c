#include <stdio.h>
#include <stdlib.h>


void check_comment (char) ;  // checks for both types of comments, then passes on control to below comments
void block_comment () ;   //  handles block comments
void single_comment () ;   // handles single line comments

FILE *fp, *fp1;

int main()
{

    char c;
    fp = fopen ("cpy.txt","r") ;   
    fp1 = fopen ("newfile.txt","w") ;    

    while((c=fgetc(fp))!=EOF)       
        check_comment(c);  

     
    fclose(fp);
    fclose(fp1);

    return 0;
}



void check_comment(char c)
{
    char d;

    if( c == '/')   // if the character starts with '/', it 'could' be a comment
    {
        if((d=fgetc(fp))=='*')   // block comment
         block_comment();  

        else if( d == '/')   // single line comment
        {
          single_comment();

        }
        else
        {
            // if both the cases fail, it is not a comment, so we add the character as it is in the new file.
            fputc(c,fp1);
            fputc(d,fp1);
        }
    }

    //  if all above fails, we add the character as it is in the new file.
    else
        fputc(c,fp1);
}



void block_comment()
{

 char a,b;

    while((a=fgetc(fp))!=EOF)   // the block comment has started, read the character by character
    {
    
        if(a=='*')    // block comment ending
        {
            b=fgetc(fp);  // check if it actually ends 

            if(b=='/')  
                return;
        }
   }

}


void single_comment()
{
 char e,f;
 
 	
    while((e=fgetc(fp))!=EOF)  //  read the character by character
    {
    
    
        if(e=='\n')   
            return;  // if the comment 'has' ended, return from the function

    }

}
