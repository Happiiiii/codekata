/*


69 - Given 2 numbers N,M. Find their difference and check whether it is even or odd.
Sample Testcase :
INPUT
5 5
OUTPUT
even  


*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
int num1,num2,difference;
cin>>num1>>num2;
difference = num1 - num2;
if(difference % 2 != 0)
{
    cout<<"odd";
}
else
{
    cout<<"even";
}

return 0;
}
