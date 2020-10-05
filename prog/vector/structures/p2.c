#include<stdio.h>

struct student
{
	int roll;
	char name[20];
	float marks;
}s1={10,"aaa",98.5},s2={5,"bbb",88.7};

int main()
{
	printf("%d %s %f\n",s1.roll,s1.name,s1.marks);
}
