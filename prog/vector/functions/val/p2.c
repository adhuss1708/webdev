#include<stdio.h>
#include<stdarg.h>

void fun(int n,...)
{
	int i,x,count;
	va_list ap;

	va_start(ap,n);
	
	for(i=0;i<n;i++)
	{
		x = va_arg(ap,int);
		count++;
	
		printf("%d",x);
		if(count>2){
			break;
		}
	}

	printf("\n");

}

int main()
{
	fun(2,15,30);
	fun(3,12,24,36);
	fun(4,11,22,33,44);
}


