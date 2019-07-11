

#include <iostream>

using namespace std;

int main()
{  
    int n;  //number
    cin>>n;  //get number of count
    int arr[n];
    for(int i=0;i<n;i++)  //for N numbers
    {
        cin>>arr[i];  //get N numbers
    }
    
    int max=arr[0];  //array start with '0' position
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)  //'i'value > (max=arr[numbers])
        {
            max=arr[i];  //if-condition (true) print the number
        }
    }
    cout<<max<<endl;
    return 0;
}
