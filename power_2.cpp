#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n>0)
    {
        while(n%2 == 0)
        {
            n=n/2;
        }
        if(n == 1)
        {
            cout<<"yes"<<endl;
        }
    }
    if(n == 0 || n != 1)
    {
        cout<<"no"<<endl;
    }
    return 0;
}
