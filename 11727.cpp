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
    int i,A[3] ;
    for(i=0;i<3;i++)
    { cin >> A[i] ; }
    sort(A, A+3) ;
    cout << "Case " << a+1 << ": " << A[1] << "\n" ;	
  }  
  return 0 ;	
} 