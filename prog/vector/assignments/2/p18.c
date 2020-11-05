#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

void bsort(char arr[][MAX], int n)            // Sorting strings using bubble sort
{ 
    char temp[MAX]; 
    for (int j=0; j<n-1; j++) 
    { 
        for (int i=j+1; i<n; i++) 
        { 
            if (strcmp(arr[j], arr[i]) > 0) 
            { 
                strcpy(temp, arr[j]); 
                strcpy(arr[j], arr[i]); 
                strcpy(arr[i], temp); 
            } 
        } 
    } 
} 

void ssort(char arr[][MAX], int n)            // Sorting strings using selection sort
{ 
    int i, j, index;  
    char temp[MAX]; 
    for (i = 0; i < n-1; i++) 
    {  
        int index = i; 
        strcpy(temp, arr[i]); 
        for (j = i+1; j < n; j++) 
        { 
            if (strcmp(temp, arr[j]) > 0) 
            {  
                strcpy(temp, arr[j]); 
                index = j; 
            } 
        } 
   
// Swapping the found minimum element with the first element 
        if (index != i) 
        { 
            char temp1[MAX]; 
            strcpy(temp1, arr[i]);  
            strcpy(arr[i], arr[index]); 
            strcpy(arr[index], temp1); 
        } 
    } 
}

 
  
int main() 
{ 
    char str[5][MAX];
    int i; 
    int n = sizeof(str)/sizeof(str[0]); 
    printf("Enter the strings:\n"); 
    for(i=0;i<n;i++)
    {
	fgets(str[i], sizeof str, stdin);
    }

    bsort(str, n); 
  
    printf("Strings in sorted order using bubble sort are\n:"); 
    for (int i=0; i<n; i++) 
    printf("\t%s", str[i]);
    
    ssort(str, n);

    printf("Strings in sorted order using selection sort are\n:"); 
    for (int i=0; i<n; i++)
    printf("\t%s", str[i]);
    return 0; 
} 
