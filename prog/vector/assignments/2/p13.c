#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef unsigned char byte;
typedef unsigned int uint;

int strbin_to_i(const char []);
int verify(const char []);

int main()
{
    char sbin[35];
    int check;
    printf("Enter the binary string:\n");
    scanf("%s",sbin);
    check = verify(sbin);
    if(check)
    {
	printf("Invalid input\n");
	 exit(0);
    }
    else
    printf("%s integer equivalent is  %d\n", sbin, strbin_to_i(sbin));
    return 0;
}


int verify(const char str[])
{
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] - '0' != 1 ) && (str[i] - '0' != 0))
        {
            return 1;
        }
    }
    return 0;
}

int strbin_to_i(const char str[]) {
    uint result = 0;
    for (int i = strlen(str) - 1, j = 0; i >= 0; i--, j++) {
        byte k = str[i] - '0'; // ASCII coding
        k <<= j;
        result += k;
    }
    return result;
}
