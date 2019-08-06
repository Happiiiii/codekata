/*


62 - Given a string S, check whether it is in binary representation.
Sample Testcase :
INPUT
1100101
OUTPUT
yes 
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
   int num,rem,count=0,binary=0;
   cin>>num;
   while(num>0)
   {
       rem = num % 10;
       if(rem == 0 || rem == 1)
       {
           count++;
       }
       else
       {
           binary++;
       }
        num = num / 10;
   }
   if(binary > 0)
   {
       cout<<"no";
   }
   else
   {
       cout<<"yes";
   }
   return 0;
}
