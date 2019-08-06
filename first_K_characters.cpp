/*


61 - Given a string S and a number K, print the first K characters.
Sample Testcase :
INPUT
laptop 3
OUTPUT
lap 
*/

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str,temp="";
    int k,i;
    cin>>str>>k;
    for(i=0;i<k;i++)
    {
        temp=temp+str[i];
    }
cout<<temp;
    return 0;
}
