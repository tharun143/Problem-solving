#include<bits/stdc++.h>
using namespace std;
inat main()
{ 
  int a,n;
  cin >> a >> n;
  
  if(a==1)
  {
    a=a+a;
    cout << a;
  }
  else if(a==2)
  {
    a=a-a;
    cout << a;
  }
}
