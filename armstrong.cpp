#include <iostream>
using namespace std;
int main()
{
int origNum, num, rem, sum = 0;
cin >> origNum;
num = origNum;
while(num != 0)
 {
rem = num % 10;
sum += rem * rem * rem;
num = num/10;
}
if(sum == origNum)
cout<< "yes";
else
cout <<"no";
return 0;
}
