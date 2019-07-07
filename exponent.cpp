#include<iostream>
using namespace std;
int main() 
{
   int num,exponent,result=1;
   cout<<"enter num: ";
   cin>>num;
   cout<<"exponent: ";
   cin>>exponent;
   cout<< num << "^" << exponent<< "=";
   while(exponent != 0){
   result *= num;
   --exponent;
   }
   cout<<result;
   return 0;
}