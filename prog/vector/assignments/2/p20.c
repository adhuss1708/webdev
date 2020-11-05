#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, count = 0, pos, flag = 0;
    char str1[100], str2[10], str3[100];
    char *p1, *p2, *p3;

    printf("Enter the string:\n");
    scanf(" %[^\n]s", str1);
    printf("Enter the string to be inserted:\n");
    scanf(" %[^\n]s", str2);
    printf("Enter the position to insert the new string:\n");
    scanf("%d", &pos);

    p1 = str1;
    p3 = str3;

    
    for (i = 0, j = 0;*p1 != '\0'; p1++, i++, j++, p3++)
    {
        str3[j] = str1[i];
        if (*p1 == ' ' && flag != 1)
            ++count;
        if (flag != 1 && count == pos - 1)
        {
            flag = 1;
            for(p2 = str2;*p2 != '\0'; p2++)
            {
                str3[++j] = *p2;
                p3++;
            }
            str3[++j] = ' ';
            p3++;
        }
    }

    str3[j] = '\0';
    printf("The final string after insertion is:\n %s\n", str3);
} 

