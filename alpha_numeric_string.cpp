/*


90 - Given an alphanumeric string, print all the numbers in the string.
Sample Testcase :
INPUT
5GUVI12
OUTPUT
512  


*/

#include <iostream>
#include<string>
using namespace std;

int main()
{
  string str;
  cin >> str;
  for( int i = 0; str[i]>0; i++ )
  {
      if( str[i] >= '0' && str[i] <= '9')
      cout << str[i];
  }
  return 0;
}

/*
Alpha Numeric String
abc123d
abcd
*/
#include <iostream>
#include<string>
using namespace std;

int main()
{
  string str;
  cin >> str;
  for( int i = 0; str[i]>0; i++ )
  {
      if( str[i] >= '0' && str[i] <= '9')
      {
        cout << "";
      }
      else
      {
          cout << str[i];
      }
  }
  return 0;
}
