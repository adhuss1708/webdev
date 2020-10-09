#include<stdio.h>
union u
{
	char ch;
	int x;
	float f;	
};

int main()
{
union u v = {'A'};
printf("%d\n", sizeof(v));
printf("%c\n", v.ch);
printf("%d\n", v.x);
printf("%f", v.f);



}
