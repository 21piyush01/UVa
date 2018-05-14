#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a,t ;
  cin >> t ;
  while(t!=0)
  {  
    int m,n,x,y ;
    cin >> x >> y ;
    for(a=0;a<t;a++)
    {
      cin >> m >> n ;
      if(m-x==0 || n-y==0)
      { cout << "divisa" << "\n" ; }
      else if(m-x>0 && n-y>0)
      { cout << "NE" << "\n" ; }
      else if(m-x>0 && n-y<0)
      { cout << "SE" << "\n" ; }
      else if(m-x<0 && n-y>0)
      { cout << "NO" << "\n" ; }
      else 
      { cout << "SO" << "\n" ; }	
    }
    cin >> t ;
  }  
  return 0 ;	
} 