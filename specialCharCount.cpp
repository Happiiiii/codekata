#include <iostream>
#include<string>
using namespace std;

int main() {
  string str;
  int i,count=0;
  cin>>str;
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]>='0' && str[i]<='9')
      {
          cout<<' ';
      }
      else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
      {
          cout<<' ';
      }
      else
      {
      count++;
      }
  }
  cout<<count;
	return 0;
}
