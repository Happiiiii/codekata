/*



74 - Given a decimal number(only 1 decimal place) round it off to nearest greater integer and print it.
Sample Testcase :
INPUT
2.6
OUTPUT
3 


*/




#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  int roundOf;
  
  float num;
  
  cin >> num; 
  
  roundOf = ceil (num);
  
  cout << roundOf;
  
    return 0;
}
