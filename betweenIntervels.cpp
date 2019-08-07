/*




73 - Given a number N and 2 numbers L and R. Check whether N is between L and R. Print yes/no.
Sample Testcase :
INPUT
3
2 6
OUTPUT
yes 


*/



#include <iostream>
#include <string>
using namespace std;

int main()
{
   int num,fst,lst,count=0;
   cin>>num;
   cin>>fst>>lst;
   for(int i=fst+1;i<lst;i++)
   {
     if(num == i)
     {
           count++;
     }
   }
   if(count>0)
   {
       cout<<"yes";
   }
   else
   {
       cout<<"no";
   }
    return 0;
}
