/*


63 - Find the minimum among 10 numbers.
Sample Testcase :
INPUT
5 4 3 2 1 7 6 10 8 9
OUTPUT
1 

*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
   int num;
   cin>>num;
   int arr[num];
   for(int i=0;i<num;i++)
   {
       cin>>arr[i];
   }
   
   int min;
   min = arr[0];
   for(int j=0;j<num;j++)
   {
     if(min>arr[j])
      {
       min=arr[j];
      }
   }
   
   cout<<min;
   return 0;
}
