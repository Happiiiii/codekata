/*


67 - Given a number N, find a nearest greater multiple of 10.
Input Size : n <= 10000
Sample Testcase :
INPUT
3
OUTPUT
10 


*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
int num,rem,result;
cin >> num;
rem = ( num/10 ) * 10;

result = rem + 10;

cout << result;
 return 0;
}
