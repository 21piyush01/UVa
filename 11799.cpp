#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a,t ;
  cin >> t ;
  for(a=0;a<t;a++)
  {
    int n ;
    cin >> n ;
    int i,temp,max=-1 ;
    for(i=0;i<n;i++)
    {
      cin >> temp ;
      if(temp>max)
      { max = temp ; }	
    }
    cout << "Case " << a+1 << ": "	<< max << "\n" ;
  }
  return 0 ;	
} 