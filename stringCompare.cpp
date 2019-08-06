#include <iostream>
#include<string>
using namespace std;

int main()
{
  int i=0,j=0;
  string str1,str2;
  cin>>str1>>str2;
  while(str1[i]!='\0')
  {
      i++;
  }
  while(str2[i]!='\0')
  {
      str1[i]=str2[i];
      i++;
      j++;
  }
  cout<<str1;
    return 0;
}
