#include<stdio.h>
int linearSearch_rec(int *arr,int n,int se)
{
	if(n<0)
	{
		return 0;
	}
	if(arr[n]==se)
	{
		return 1;
	}
	
	return linearSearch_rec(arr,n-1,se);// dec
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
	int se,res;
	scanf("%d",&se);
	res=linearSearch_rec(arr,n-1,se);
	if(res==1)
	{
		printf("found");
	}
	else{
		printf("not found");
	}
}
/*
linear
n=8
8 5 4 1 9 3 2 7
0 1 2 3 4 5 6 7
se=2

linearsearch(int *arr,int n,int se)// 6
   if arr[n]==se://arr[6]==se
       return 1
    else:
    linearsearch(arr,n-1,se)// arr,6,2
      


linearsearch(arr,n-1,se);// n=8
  




*/
