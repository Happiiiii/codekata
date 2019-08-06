/*


55 - Given 2 numbers N,M. Print whether the product of two numbers is even or odd.
Sample Testcase :
INPUT
12 3
OUTPUT
even 
*/



#include <iostream>

using namespace std;

int main()
{
 int num1,num2,product;
 cin>>num1>>num2;
 product=num1*num2;
 
 if(product%2!=0)
 {
     cout<<"odd";
 }
 else
 {
     cout<<"even";
 }
 
 return 0;
}
