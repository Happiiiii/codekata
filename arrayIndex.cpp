/*
3
1 2 3                                                                                                                          
0 1                                                                                                                            
1 2                                                                                                                            
2 3
*/
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
        cout<<i<<" "<<arr[i]<<endl;
    }
    return 0;
}
