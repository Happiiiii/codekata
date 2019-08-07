/*


79 - Given 2 numbers N,M. Find their product and check whether it is a perfect square.
Sample Testcase :
INPUT
5 5
OUTPUT
yes 


*/


#include <iostream>
#include <string> 
using namespace std;

int main()
{
 
int num1,num2,product, flag=false;
cin>>num1>>num2;
product=num1*num2;

for(int i=1 ;i<=product ;i++)
{
    if(product == i * i)
    {
        flag = true;
        break;
    }
}

 if(flag)
     {
     cout << "yes";
     }
     else
    {
     cout << "no";
    }
    return 0;
}

