/*
54 - Given a number N, print the nearest even number which is less than or equal to N.
Sample Testcase :
INPUT
123
OUTPUT
122 
*/

#include <iostream>

using namespace std;

int main()
{
  int num,temp;
  cin>>num;
 if(num%2!=0)
 {
     num=num-1;
 }
 cout<<num;
    return 0;
}

