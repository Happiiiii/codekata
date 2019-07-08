#include <iostream>
using namespace std;
int a=5;
void myprint(int a)
{
cout<<a;
if(a>0)
{
a=a-1;
myprint(a);
//reverse recursion
//cout<<a;
}
}
int main()
{
myprint(a);
return 0;
}
