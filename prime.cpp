#include <iostream>
using namespace std;
int main(){
int num,con = true;
cout<<"Enter any number: ";
cin>>num;
for(int i = 2; i <= num / 2; i++) {
if(num % i == 0) {
con = false;
break;
}
}
if (con==true)
cout<<num<<" "<<"yes";
else
cout<<num<<" "<<"not";
return 0;
}
