#include <stdio.h>
#include <string.h>

int main ()
 {
   char str1[20], str2[20];
   char temp;
   int i, j;

	printf("Enter the two strings:\n");
	gets(str1);
	gets(str2);

   int l1 = strlen(str1);
   int l2 = strlen(str2);

   

   if( l1 != l2) {    
      printf("%s and %s are not anagrams! \n", str1, str2);
      return 0;
   }
   
   // Sorting both strings for comparison

   for (i = 0; i < l1-1; i++) {
      for (j = i+1; j < l1; j++) {
         if (str1[i] > str1[j]) {
            temp  = str1[i];
            str1[i] = str1[j];
            str1[j] = temp;
         }
         if (str2[i] > str2[j]) {
            temp  = str2[i];
            str2[i] = str2[j];
            str2[j] = temp;
         }
      }
   }

   // Compare both strings character by character

   for(i = 0; i<l1; i++) {
      if(str1[i] != str2[i]) {    
         printf("Strings are not anagrams! \n", str1, str2);
         return 0;
      }
   }

   printf("Strings are anagrams! \n");
   return 0;
}
