
/*
51 - Given a number N, print all its digits(in same order).
Sample Testcase :
INPUT
123
OUTPUT
1 2 3 
*/

#include <iostream>
using namespace std;
int main() 
{
   
   int num,sum=0,rem;
   cin>>num;
   while(num>0)
   {
       rem=num%10;
       sum=sum*10+rem;
       num=num/10;
   }
   while(sum>0)
   {
        rem=sum%10;
        cout<<rem<<" ";
        sum=sum/10;
   }
   return 0;
}
