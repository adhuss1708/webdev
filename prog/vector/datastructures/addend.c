#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	struct student *next;  //self-referential structure
};
struct student *hptr=0;

void add_begin()
{
struct student *temp;
temp = (struct student *)malloc(sizeof(struct student));
printf("Enter roll,name and marks\n");
scanf("%d%s%f", &temp->roll,temp->name,&temp->marks);

temp->next = hptr;
hptr = temp;
}

void print()
{
	struct student *ptr = hptr;
	while(ptr!=NULL)
	{
		printf("%d%s%f\n", ptr->roll,ptr->name,ptr->marks);
	ptr = ptr->next;
	}
}

int main()
{
        char ch;
	


do{
add_begin();
printf("Do you want to add more data:");
scanf("%c", &ch);
}while(ch=='Y'||ch=='y');

print();

}
