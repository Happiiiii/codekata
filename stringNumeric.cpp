#include <iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    if(s[i]>'0' && s[i]<'9' || s[i]=='.')
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
