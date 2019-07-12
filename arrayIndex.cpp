#include <iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
        cout<<arr[i]<<" "<<i;
    }
    return 0;
}
