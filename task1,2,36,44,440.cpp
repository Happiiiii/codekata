/*
1,2,36,44,440

*/

#include <iostream>

using namespace std;

int main()
{
   int num = 1,k=2;
   for(int i=0;i<5;i++)
   {
       if(i % 2 != 0)
       {
           num = num + k;
           cout << num<<" ";
       }
       else
       {
           num = num * k;
           cout << num<<" ";
       }
       k = k + 2;
   }


    return 0;
}

