#include <iostream>
using namespace std;
int main()
{
int origNum, num, rem, sum = 0;
cout << "Enter number: ";
cin >> origNum;
num = origNum;
while(num != 0)
 {
rem = num % 10;
sum += rem * rem * rem;
num = num/10;
}
if(sum == origNum)
cout << origNum <<" "<< "yes";
else
cout << origNum <<" "<< "no";
return 0;
}
