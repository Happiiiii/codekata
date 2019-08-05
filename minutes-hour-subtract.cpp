#include <iostream>

using namespace std;

int main()
{
  int h1,h2,h3;
  int m1,m2,m3;
  cin>>h1>>m1;
  cin>>h2>>m2;
  if(h1>h2)
  {
      h3=h1-h2;
      m3=m1-m2;
  }
  else
  {
      h3=h2-h1;
      m3=m2-m1;
  }
  
  cout<<h3<<" "<<m3;
  return 0;
}
