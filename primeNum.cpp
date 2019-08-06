/*


66 - Given a number N, check whether it is prime.
Sample Testcase :
INPUT
123
OUTPUT
no 


*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
 int num,count=0;
 cin>>num;
 for(int i=1;i<=num;i++)
 {
     if(num%i==0)
     {
         count++;
     }
 }
if(count==2)
{
    cout<<"yes";
}
else
{
    cout<<"no";
}
 return 0;
}
