#include<iostream>
using namespace std;
int main() 
{
   int num,exponent,result=1;
   cin>>num>>exponent;
   while(exponent != 0){
   result *= num;
   --exponent;
   }
   cout<<result;
   return 0;
}
