/*


71 - Given a string S, check if it is a palindrome. Print yes/no.
Sample Testcase :
INPUT
lappal
OUTPUT
yes 


*/




#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str,rev="";
    cin>>str; //madam
    
    for(int i=str.length()-1;i>=0;i--)
    
    {
        rev = rev + str[i];
    }
    
    
    if (str == rev)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
