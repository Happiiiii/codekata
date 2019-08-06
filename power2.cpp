/*


70 - Given a number N, find whether its nearest greater power of 2.
Input Size : N <= 1000
Sample Testcase :
INPUT
4
OUTPUT
8


*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
int num,result;
cin >> num;
if(num>0)
{
     result = num * 2;
}

cout<<result;
return 0;
}
