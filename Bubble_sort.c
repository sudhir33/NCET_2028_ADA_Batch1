#include<stdio.h>
void bubbleSort(int *arr,int n)
{
	int i,j,sc,temp,count=0;
	for(i=0;i<n-1;i++)
	{
		sc=0;
		for(j=0;j<n-i-1;j++)
		{
			count++;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				sc++;
			}
		}
		if(sc==0)
		{
			printf("%d\n",count);
			return;
		}
	}
	printf("%d\n",count);
}
int main()
{
	int n;
	scanf("%d",&n);// size of array
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);// fun call
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
