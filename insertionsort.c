#include<stdio.h>
int main()
{
	int arr[]={2,4,1,3,7,5,6,1,2,1,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<=n-1;i++)
	{       int key=arr[i];
		int j=i-1;
		for(j;j>=0;j--)
		{
			if(key<arr[j])
			   {
				   arr[j+1]=arr[j];
			   }
			else 
			{

				break;
			}
		}
		arr[j+1]=key;

	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
