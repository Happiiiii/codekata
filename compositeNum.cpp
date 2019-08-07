/*


76 - Given a number N, check whether it is composite.
Sample Testcase :
INPUT
123
OUTPUT
yes 


*/



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
 int num,count=0;
 cin >> num;
 for(int i=1;i<num;i++)
 {
     if( num%2 == 0)
     {
         count++;
     }
 }
 
 if(count != 2)
 {
     cout << "yes";
 }
 else
 {
     cout << "no";
 }
    return 0;
}
