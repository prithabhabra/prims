// prims.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, min, ne=1, n, u, v, mincost=0;
	int visited[10]={0}, cost[10][10];
	printf("enter no. of edges:");
	scanf("%d",&n);
	printf("enter weighted matrix:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	visited[1]=1;
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if((cost[i][j]<min) && (visited[i]!=0))
				{
					min=cost[i][j];
					u=i;
					v=j;
				}
			}
			
		}
		if(visited[u]==0 || visited[v]==0)
		{
			printf("\n edge %d: (%d,%d) cost: %d",ne++,u,v,min);
			mincost+=min;
			visited[v]=1; visited[v]=1;
		}
		cost[u][v]=cost[v][u]=999;
	}
	printf("\nminimum cost = %d",mincost);
	getch();
}
		

