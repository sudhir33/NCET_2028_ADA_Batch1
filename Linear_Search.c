#include<stdio.h>
int linearSearch(int *arr,int n,int se)
{
	int i;//1
	for(i=0;i<n;i++)//1;n+1,n
	{
		if(arr[i]==se)//1
		{
			return 1;//1
		}
	}
	return 0;//1
}
// T(n)=2+2*(1+n+1+n)=2+2*(2n+n)== 2+4n+2n=
//T(n)=2+6n--> n
/*
asymtotic notations:
1<logn<n<nlogn<n2<n2logn<n3<n3logn <n4..... nn

Big O       O(N)    upper bound
Big Omega           lower bound
Big Theta           avg bound

f(n)=O(g(n)

where  c*g(n)<=f(n)<=c*g(n)   c>0 n>0   n=2

F(n)=2n+4logn+5<=2n+4n+5n=11n

2n+4logn+5>=1*n   





F(N)=2+4n+6n2
1*n2<=2+4n+6n2<=12*n2    n2












F(N)=2+4n+6n2
F(N)=2+4n+6n2<=2n2+4n2+6n2

2+4n+6n2<=12n2      c=12 g(n)=n2   --> O(n2)














*/




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
	res=linearSearch(arr,n,se);
	if(res==1)	
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
	return 0;
}


