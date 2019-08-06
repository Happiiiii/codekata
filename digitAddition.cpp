/*
53 - Given a number N, print the sum of all its digits.
Sample Testcase :
INPUT
123
OUTPUT
6 
*/







#include <iostream>

using namespace std;

int main()
{
  int num,sum;
  cin>>num;
  while(num!=0)
  {
      sum=sum+(num%10);
      num=num/10;
  }
 cout<<sum;
    return 0;
}
