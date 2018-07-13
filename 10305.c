#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void DFSv(int n, int G[][n], int v[], int s, int q[], int x)
{
  int i ;
  for(i=0;i<n;i++)
  {
    if(G[s][i]==1 && v[i]==0)
    { 
      printf(" ##%d=>%d## \n",s+1,i+1);
      DFSv(n,G,v,i,q,x) ; 
    }  
  }
  v[s]=1 ;
}

void DFS(int n, int G[][n], int v[], int q[], int x)
{
  int i,j ;
  for(i=0;i<n;i++)
  {
    if(v[i]==0)
    { DFSv(n,G,v,i,q,x) ; } 
  }  
}

int main()
{
  int n,m ;
  scanf("%d",&n) ;
  scanf("%d",&m) ;
  //while(!(n==0 && m==0))
  //{
    int i,j,a,b ;
    int G[n][n] ;
    int v[n],q[n],x=0 ;
    for(i=0;i<n;i++)
    { 
      v[i]=0 ;
      for(j=0;j<n;j++)
      { G[i][j]=0 ; }  
    }
    for(i=0;i<m;i++)
    { 
      scanf("%d",&a) ;
      scanf("%d",&b) ;
      G[a-1][b-1]=1 ;
    }
    DFS(n,G,v,q,x) ;
    for(i=0;i<x;i++)
    { 
      printf("%d ",q[i]) ;
    }  
  //  cin >> n >> m ;
  //}
  return 0 ;	
} 