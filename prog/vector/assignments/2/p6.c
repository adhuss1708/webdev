#include<stdio.h>
#include<string.h>
 
int main()
{
   char str[100], blank[100];
   int i = 0, j = 0;
 
   printf("Enter the string:\n");
   gets(str);
 
   while (str[i] != '\0')
   {
      if (!(str[i] == ' ' && str[i+1] == ' ')) {
        blank[j] = str[i];
        j++;
      }
      i++;
   }
 
   blank[j] = '\0';
 
   printf("String after removing blanks: \n%s\n", blank);
 
   return 0;
}
