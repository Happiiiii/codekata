#include <iostream>
#include<string>
using namespace std;

int main() {
 int n1,n2,temp;
 cin>>n1>>n2;
 temp=n1^n2;
 n2=n2^temp;
 n1=temp^n2;
 cout<<n1<<" "<<n2;
 return 0;
}
