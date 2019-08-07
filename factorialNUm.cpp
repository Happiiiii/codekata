/*


77 - Given a number N, print its factors.
Input Size : n<=1000 
Sample Testcase :
INPUT
6
OUTPUT
1 2 3 6 


*/




#include <iostream>
#include <string> 
using namespace std;

int main()
{
 
 int num;
 cin>>num;
 for(int i=1;i<=num;i++)
 {
     if(num % i == 0)
     {
         cout<<i<<" ";
     }
 }
    return 0;
}
