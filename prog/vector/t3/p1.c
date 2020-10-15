#include<stdio.h>
int main()
{
int buf[5];
int *bptr = &buf[3];
bptr[-1] = 2; bptr [-2] = 1;
bptr[-3] = 0;
printf("%d ", buf[2] );
}
