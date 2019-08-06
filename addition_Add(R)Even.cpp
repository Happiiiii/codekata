/*


64 - Given 2 numbers N and M add it and check whether the result is odd or even.
Sample Testcase :
INPUT
9 2
OUTPUT
odd 


*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
   int num1,num2,sum;
   cin >> num1 >> num2;
   sum = num1 + num2;
   if(sum%2!=0)
   {
       cout<<"odd";
   }
   else
   {
       cout<<"even";
   }
   return 0;
}
