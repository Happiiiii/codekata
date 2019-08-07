/*


75 - Given a string S, print it after changing the middle element to * (if the length of the string is even, change the 2 middle elements to *).
Sample Testcase :
INPUT
hello
OUTPUT
he*lo 


*/


#include <iostream>
#include <string> 
using namespace std;

int main()
{
 
  string str,result="";
  cin>>str;
  int length;
  length=str.length();
  
  //even string
  
  if(length % 2 == 0 )
  {
      str [ length/2 ]='*';
      str [ (length/2)-1]='*';
  }
  
  //odd string
  
  if(length % 2 == 1)
  {
      str [ length/2 ]='*';
  }
  
  //result
  
  for(int i=0;i<length;i++)
  {
      result = result + str[i];
  }
  
  cout << result;
    return 0;
}
