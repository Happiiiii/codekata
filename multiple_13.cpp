/*


78 - Given a number N, find whether it is a multiple of 13.
Sample Testcase :
INPUT
26
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

     if(num % 13 == 0)
     {
         cout<<"yes";
     }
     else
     {
         cout<<"no";
     }
 
    return 0;
}

