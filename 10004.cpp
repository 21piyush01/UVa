#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n ;
  cin >> n ;
  //while(n!=0)
  //{
    int g[n][n] = {0} ;
    int a,b,nids=1 ;
    int l,i,j ;
    cin >> l ;
    for(i=0;i<l;i++)
    {
       cin >> a >> b ;
       g[a][b] = g[b][a] = 1 ;	
    }
    int visited[n]={0}, parent[n] ;
    int r=-1,f=0,q[100] = {0} ;
    q[++r]=0 ;
    visited[0]=1 ;
    parent[0]=-1 ;
    while(f<=r)
    {
        int v, u=q[f] ;
        f++ ;
        for(v=0;v<n;v++)
        {
            if(visited[v]==0 && g[u][v]==1)
            {
              q[++r]=v ;
              parent[v]=u ;
              if(visited[u]==1)
              { visited[v]=2 ; }
              else if(visited[u]==2)
              { visited[v]=1 ; }
            }
            else if(visited[v]==1 && visited[u]==1 && g[u][v]==1)
            { nids=-1 ; }
            else if(visited[v]==2 && visited[u]==2 && g[u][v]==1)
            { nids=-1 ; }
        }
    }
    if(nids==1)
    { cout << "BICOLORABLE.\n" ; nids=1 ;}  
    else
    { cout << "NOT BICOLORABLE.\n" ; nids=1 ; }  
 //   cin >> n ;
 // }
  return 0 ;	
} 