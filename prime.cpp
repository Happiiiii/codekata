#include <iostream>
using namespace std;
int main(){
int num,con = true;
cin>>num;
for(int i = 2; i <= num / 2; i++) {
if(num % i == 0) {
con = false;
break;
}
}
if (con==true)
cout<<"yes";
else
cout<<"no";
return 0;
}
