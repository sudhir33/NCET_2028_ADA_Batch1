
/*
5 6
0 1
0 2

*/

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int d;
	struct Node *next;
};
typedef struct Node NODE;
NODE * add(NODE **adjlist,int s,int d)// 1 2
{
	NODE *NN;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->d=d;
	NN->next=NULL;
	NODE *temp;
	if(adjlist[s]==NULL)
	{
		adjlist[s]=NN;
	}
	else
	{
		temp=adjlist[s];
		adjlist[s]=NN;
		NN->next=temp;
	}
	return adjlist[s];
}
void print(NODE **adjlist,int v)
{
	int i;
	NODE *temp;
	for(i=0;i<v;i++)
	{
		printf("%d-->",i);
		temp=adjlist[i];
		while(temp)
		{
			printf("%d ",temp->d);
			temp=temp->next;
		}
		printf("\n");
	}
}
void dfs(NODE **adjlist,int v,int start)
{
	int vis[v],i;
	for(i=0;i<v;i++)
	{
		vis[i]=0;
	}
	int stack[v],top=-1;
	stack[++top]=start;
	vis[start]=1;
	int u;
	NODE *temp;
	while(top!=-1)
	{
		u=stack[top--];
		printf("%d ",u);
		temp=adjlist[u];
		while(temp)
		{
			if(vis[temp->d]==0)
			{
				vis[temp->d]=1;
				stack[++top]=temp->d;
			}
			temp=temp->next;
		}
		
	}
	
	
	
}
void topo_sorting(NODE **adjlist,int v,int *indeg)
{
	
}
int main()
{
	int v,e,i;
	scanf("%d%d",&v,&e);
	NODE *adjlist[v];
	for(i=0;i<v;i++)
	{
		adjlist[i]=NULL;
	}
	int s,d;
	int indeg[v];
	for(i=0;i<v;i++)
	{
		indeg[i]=0;
	}
	for(i=1;i<=e;i++)	
	{
		scanf("%d%d",&s,&d);
		adjlist[s]=add(adjlist,s,d);
		indeg[d]++;
		//adjlist[d]=add(adjlist,d,s);
	}
	
	topo_sorting(adjlist,v,indeg);
	
	return 0;
}
/*

5 6
0 1
0 3
2 1
2 3
1 4
2 4

0-->3 1
1-->4 2 0
2-->4 3 1
3-->2 0
4-->2 1


temp=adjlist[u]
0--> 1 2
1 -->0 4
2--> 0 3 4
3-->2 4 5
4-->1 2 3 7
5 -->3 6 7
6 -->5 7
7--> 4 5 6


vis=[1,1,1,1,1,1,1,1]
     0 1 2 3 4 5 6 7
sv=0

0 7
0 6
0 5
0 4
0 3 
0 2 
0 1 
0 0 
top =-1


take visted array of lenth v and make all as zero
take stack and top at -1
push starting vertex into the stack
make starting vertex as visted
loop:
pop elemt name as u and print it   u=1   diplay  0 2 4 7 6 5 3 1
push all unvisted nodes to stack of u
if stack is empty stop the iteration



BFS:
0--> 1 2
1 -->0 4
2--> 0 3 4
3-->2 4 5
4-->1 2 3 7
5 -->3 6 7
6 -->5 7
7--> 4 5 6

vis=[1,1,1,1,1,1,1,1]
     0 1 2 3 4 5 6 7
queue=[-1,-1,-1,-1, -1, -1, -1, -1]
       0  1  2  3   4   5  6   7
                               r    f=8
start=3


1. take vistied array of size v
2. make all as unvisited as 0
3. take queue of size v
4. f=0 r=0
5. enqueue starting vertex to Queue
6. mark starting vertex as visited
loop:
1. dequeue from queue and named it as u and display it 
     
2. add all unvisited nodes to queue of adjlist[u]
3. mark all of them as visted
4. if queue is empty stop the loop  f>r
































*/





