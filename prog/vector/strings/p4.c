//Counting substring in main string 

// C Program To Count the numbere  of times a Substring is in Mainstring 
 
#include <stdio.h>
#include <string.h>
 
char str1[100], str2[100];
int count = 0, count1 = 0;
 
int main()
{
    int i, j, l, l1, l2;
 
    printf("\nEnter the main string : ");
    scanf("%[^\n]s", str1);
 
    l1 = strlen(str1);
 
    printf("\nEnter the substring to be found : ");
    scanf(" %[^\n]s", str2);
 
    l2 = strlen(str2);
 
    for (i = 0; i < l1;)
    {
        j = 0;
        count = 0;
        while ((str1[i] == str2[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", str2, count1, str1);
}

