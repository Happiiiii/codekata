/*


58 - Given 2 numbers N and K followed by n numbers check if K exists.
Sample Testcase :
INPUT
4 2
1 2 3 3
OUTPUT
yes
*/



#include <iostream>
using namespace std;
int main()
{
    int num,k,count=0;
    cin>>num>>k;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<num;j++)
    {
        if(arr[j]==k)
        {
            count++;
        }
    }
    if(count>=1)
    {
    cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
}
