#include <iostream>
using namespace std;

int main ()
{
int a,b, i, j, temp, con;
cin >> a>> b;
if (a > b)
 {
   temp = a;
   a = b;
   b = temp;
 }
for (i = a + 1; i < b; ++i)
 {
con = 0;
for (j = 2; j <= i/2; ++j)
   {
if (i % j == 0)
 {
con = 1;
break;
 }
   }
if (con == 0) 
cout << i << " ";
 }
return 0;
}
