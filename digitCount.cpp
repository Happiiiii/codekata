/*


59 - Count number of digits of an integer.
Sample Testcases :
INPUT
548
OUTPUT
3 
*/

#include <iostream>
using namespace std;
int main()
{
    int count=0,n,rem;
    cin>>n;
    while(n>0)
    {
    	rem=n%10;
    	count++;
    	n=n/10;
    }
    cout<<count;
    return 0;
}
