#include<stdio.h>
int main()
{
	int arr[10]={2,5,7,34,56,8,90,11,12,13},i,j,item;
	printf("Array elements are...");
	for(i=0;i<10;i++)
	{
		printf("%d", arr[i]);
		printf("\n");
	}

	printf("Enter the element to be searched:");
	scanf("%d", &item);

	for(i=0;i<10;i++)
	{
		if(arr[i]==item)
		{
			printf("%d found at %d position", item,i+1);
			break;
		}
	}
		
	if(i==10)
		printf("Element not found");

	}
