
#include <iostream>
using namespace std;

int main() {
	int i,num,arr[50],largenum;
	cin>>num;
	for(i=0;i<num;i++)
	{
	    cin>>arr[i];
		largenum =arr[0];
	}
	for(i=1;i<num;i++)
	{
		if(largenum<arr[i])
		largenum=arr[i];
	}
	cout<<largenum;
    return 0;
}
