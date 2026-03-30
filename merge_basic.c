/*
merge sort  

n=8
 L     M       H
 8 1 7 2 6 3 5 4
 0 1 2 3 4 5 6 7
 
 L M   H                 L M   H
 8 1 7 2                 6 3 5 4
 0 1 2 3                 4 5 6 7

L H    L H                L H       L H
8 1    7 2                6 3       5 4
0 1    2 3                4 5       6 7
M      M                  M         M


8    1     7   2         6   3      5     4
0    1     2   3         4   5      6     7

1 8       2 7       3 6     4 5
0 1       2 3       4 5     6 7

1 2 7 8        3 4 5 6
0 1 2 3        4 5 6 7

1 2 3 4 5 6 7 8
0 1 2 3 4 5 6 7


i<n && j<m
 if arr1[i]>arr2[j]-->  50>60  res[k++]=arr2[j] j++
 else -->  res[k++]=arr1[i]  i++

arr1    n=5
10 20 30 40 50
0  1  2  3   4
               i

arr2   m=9
11 22 25 35 45 60 70 80 90
0  1   2  3  4  5  6  7  8
                j

res   m+n
10 11 20 22 25 30 35 40 45 50 60 70 80 90
0  1  2  3  4  5  6  7  8  9  0 1 2 3
                              k
                              
                              
                              
                              
                              
                              
                    
*/
#include<stdio.h>
#include<stdlib.h>
int * merge(int *arr1,int n,int *arr2,int m)
{
	int *res;
	res=(int *)malloc((m+n)*sizeof(int));
	int i,j,k;
	i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(arr1[i]>arr2[j])
		{
			res[k++]=arr2[j++];
		}
		else
		{
			res[k++]=arr1[i++];
		}
	}
	while(i<n)
	{
		res[k++]=arr1[i++];
	}
	while(j<m)
	{
		res[k++]=arr2[j++];
	}
	return res;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	int arr1[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	scanf("%d",&m);
	int arr2[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int *res;
	res=merge(arr1,n,arr2,m);// fun call
	for(i=0;i<m+n;i++)
	{
		printf("%d ",res[i]);
	}
	return 0;
}















