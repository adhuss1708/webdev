#include<stdio.h>
int main()
{
	int x=10;
	int *p=&x;
	char *ptr;

	printf("x=%d\n",x);
	printf("*p=%d\n",*p);
	printf("Address of x=%p\n",&x);
	printf("Address of p=%p\n",&p);
	printf("Value of p=%d\n",p);
	printf("%d%d", sizeof(*p),sizeof(p));	
	printf("%d\t%d", sizeof(*ptr),sizeof(ptr));
}



