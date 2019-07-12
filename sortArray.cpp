#include <iostream>
using namespace std;
int main() {
	int num,temp;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++) //i+1=> increment of index value
		{
			if(arr[i]>arr[j]) //swap function
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		cout<<arr[i]<<" ";
	}
	
return 0;
}
