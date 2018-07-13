#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int i,n,b,h,w,min=999999 ;
  cin >> n >> b >> h >> w ;
  for(i=0;i<h;i++)
  {
    long long int p,a[w],j,z=0 ; 
    cin >> p ;
    for(j=0;j<w;j++)
    {
      cin >> a[j] ;
      if(a[j]>=n)
      { z=1 ; }	
    }	
    if(z==1 && p*n<=b)
    { 
      if(min >= p*n)
      { min = p*n ; } 
    }	
  }
  if(min==999999)
  { cout << "stay home" << "\n" ; }
  else
  { cout << min << "\n" ; }	
  return 0 ;	
} 