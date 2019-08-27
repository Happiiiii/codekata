/*
Amstrong number between interavels
100 400
153
370
371
*/
#include <iostream>
using namespace std;
 
int main()
{
int num1,num2,sum=0,rem,i;
cin >> num1 >> num2;

for(int i=num1;i<=num2;i++)
{
    int num=i;
    while(num>0)
    {
        rem = num % 10;
        sum = sum + rem*rem*rem;
        num = num /10;
    }
    if(sum == i)
{
   cout<<i<<endl;
}
sum=0;
}
return 0;
}
