#include<stdio.h>
void swap(int *a , int *b)
{
	int swap=*a;
	*a=*b;
	*b=swap;
}
int main()
{
	int arr[]={1,4,2,3,8,6,7,5,0,8,7,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if (i!=min)
		swap(&arr[i],&arr[min]);
	}
	for(int i=0;i<n;i++)
	{printf("%d ",arr[i]);
	}
	return 0;
}
