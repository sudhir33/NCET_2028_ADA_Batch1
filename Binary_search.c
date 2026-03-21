#include<stdio.h>
int binarySearch(int *arr,int n,int se)
{
	int L,H,M;
	L=0,H=n-1;
	while(L<=H)
	{
		M=(L+H)/2;
		if(arr[M]==se)
		{
			return 1;
		}
		else if(arr[M]>se)
		{
			H=M-1;
		}
		else if(arr[M]<se)
		{
			L=M+1;
		}
	}
	return 0;
}
// log n
// 1 2 3 4 5 6 7 8 
//4 1
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,res,se;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	res=binarySearch(arr,n,se);
	if(res==1)
	{
		printf(" found");
	}
	else
	{
		printf("Not Found");
	}
	return 0;
}



/*

