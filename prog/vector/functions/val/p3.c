//printf user defined function
//
#include<stdio.h>

void my_printf(const char)
{
	

}

int main()
{
	char ch='A';
	int x=1234;
	float f=25.5;
	char s[] = "vector";

	my_printf("Hello\n");
	my_printf("%c%d%f%s", ch,x,f,s);

}
