#include<stdio.h>
void insertionSort(int *arr,int n)// arr,9
{
	if(n==1)
	{
		return;
	}
	insertionSort(arr,n-1);//arr,8
	int j,temp,i;
	i=n-1;
	temp=arr[i];
	for(j=i-1;j>=0;j--)
	{
		if(arr[j]>temp)
		{
			arr[j+1]=arr[j];
		}
		else
		{
			break;
		}
	}
	arr[j+1]=temp;
	
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertionSort(arr,n);// fun call
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

/*


9 1 8 2 7 3 5 6 4
0 1 2 3 4 5 6 7 8

n=8
n=7
6
5
4
3
2
1






*/
