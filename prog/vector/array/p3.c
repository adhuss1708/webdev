#include<stdio.h>
int main()
{
	int arr[]={2,5,3,2,4,6,7,6,8,5};
	int i,j;

	int len = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr[i]==arr[j])
				printf("%d\n", arr[i]);
		}
	}
	return 0;

}


