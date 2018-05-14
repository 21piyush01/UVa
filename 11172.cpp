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
    long long int x,y ;
    cin >> x >> y ;
    if(x>y)
    { cout << ">" << "\n" ; }
    else if(x<y)
    { cout << "<" << "\n" ; }
    else 
    { cout << "=" << "\n" ; }	
  }
  return 0 ;	
} 