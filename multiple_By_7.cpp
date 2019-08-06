/*


68 - Given a number N, find whether it is a multiple of 7.
Sample Testcase :
INPUT
14
OUTPUT
yes


*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
int num;
cin>>num;
if(num % 7 != 0)
{
    cout << "no";
}
else
{
    cout<<"yes";
}
return 0;
}
