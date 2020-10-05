#include<stdio.h>
union u
{
	int x;
	int y;
};
int main()
{
	union u v;
	printf("size v=%d\n",sizeof(v));
	v.x=10;
	v.y=20;
	printf("%d%d\n", v.x,v.y);
	printf("%p\n", v.x);
	printf("%p\n", v.y);
}
