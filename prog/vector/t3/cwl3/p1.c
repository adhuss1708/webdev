// C Program To count the number  of times a Substring is present in Mainstring 
 
#include <stdio.h>
#include <string.h>
 
char str1[100], str2[100]; // str1 is main string and str2 is substring 
int count = 0, count1 = 0;
 
int main()
{
    int i, j, l, length1,length2;
 
    printf("\nEnter the main string : ");
    scanf("%[^\n]s", str1);
 
    length1 = strlen(str1); // length of main string 
 
    printf("\nEnter the substring to be found : ");
    scanf(" %[^\n]s", str2);
 
    length2 = strlen(str2); // length of sub string 
 
    for (i = 0; i < length1;)
    {
        j = 0;
        count = 0;
        while ((str1[i] == str2[j])) // comparing characters of main string and substring 
        {
            count++;
            i++;
            j++;
        }
        if (count == length2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("\n%s occurs %d times in %s", str2, count1, str1);
    
    printf("\n");
}

