#include <iostream>
using namespace std;
int main(){
int n,k=0,arr;
cin>>arr;
int temp[arr];
cin>>n;
for(int i=0;i<5;i++)
{
    cin>>temp[i];
}
for(int i=0;i<n;i++)
{
    k+=temp[i];
}
std::cout << k << std::endl;
return 0;
}
