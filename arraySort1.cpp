#include<iostream>
using namespace std;
 
 int main()
 {
 int num;
 cin>>num;
 int arr[num];
 for(int i=0;i<num;i++)
 {
     cin>>arr[i];
 }
 int temp;
 for(int i=0;i<num;i++)
 {
     for(int j=i+1;j<num;j++)
     {
         if(arr[i]>arr[j])
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
