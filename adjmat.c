#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
typedef struct Node NODE;
NODE *addEdge(NODE **adjlist,int x,int y)
{
	NODE *NN;
	NN=(NODE*)malloc(sizeof(NODE));
	NN->data=y;
	NN->next=NULL;
	if(adjlist[x]==NULL)
	{
		adjlist[x]=NN;
	}
	else
	{
		NODE *temp;
		temp=adjlist[x];
		adjlist[x]=NN;
		NN->next=temp;
	}
	return NN;
}

void print(NODE **adjlist,int V)
{
	int i;
	for(i=0;i<V;i++)	
	{
		printf("%d-->",i);
		NODE *temp;
		temp=adjlist[i];
		while(temp)//temp!=NULL
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}



int main()
{
	int V,E,i;
	scanf("%d%d",&V,&E);
	NODE *adjlist[V];
	for(i=0;i<V;i++)
	{
		adjlist[i]=NULL;
		//printf("hai");
	}
	int x,y;
	for(i=1;i<=E;i++)
	{
		scanf("%d%d",&x,&y);
		adjlist[x]=addEdge(adjlist,x,y);// fun call
		adjlist[y]=addEdge(adjlist,y,x);
	}
	print(adjlist,V);// fun call
	return 0;
}








/*
bfs 
dfs


array  0--n
string-- 0-\0
stack-->top --0
queue--> f -- r

linked list--> head --> null

trees--> bfs- level  dfs-- pre post in

graphs--> bfs---> queue   dfs--> stack


















V E
5 6
0 2
0 1
1 3
2 3
2 4
3 4
adjlist
0-->1,2
1-->3,0
2-->4,3,0
3-->4,2,1
4-->3,2

vis=[1,1,1,1,1]
     0 1 2 3 4
     
queue=[N,N,N,N,N]  f=5 r=4     f>r 5>4
       0 1 2 3 4
sv=1

loop:
u=2



display 1 3 0 4 2




undirected graph

V  E
6 10
0 1
0 2
0 4
1 4
1 3
2 3
2 4
2 5
3 5
3 4



0-->1 2 4
1--> 0 3 4
2-->0 3 4 5
3-->1 2 4 5
4-->0 1 2 3
5-->2 3


bfs:
1. create visited array of size V
2. take all elements as 0. indicates all are not visited
3. create a queue of size V. take f,r at 0
4. read starting vertex as sv.
5. make sv as visited
6. enqueue sv into the queue
repeat the loop until queue is empty(f>r)
	dequeue the front element from queue and copied into u.
	display u.
	traverse the adjlist of u upto the last element:
	       if the vertex is not visted then mark it as visited
	         and enqueue into the queue
	
	  



































*/














