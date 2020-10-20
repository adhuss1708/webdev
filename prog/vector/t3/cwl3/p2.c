//C program to print Fibonacci series between 1 to 300 using Recusrion function


#include<stdio.h>

int fib(int n) // Recursion function to print fibonacci series
{
	if(n==0 || n==1)
		return (1);
	else
		return(fib(n-1)+fib(n-2));
}

int main()
{
	int i,end=300;
	printf("Fibonacci Series from 1 to 300... \n");
	for(i=1;fib(i)<=end;i++)
	{
		printf("%d", fib(i));
		printf("\n");
	}

}

