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
	
}
