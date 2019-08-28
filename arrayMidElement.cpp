/*
3 
2 1 3                                                                                                                        
1 2 3                                                                                                                          
2                                                                                                                              
 
 4
 1 2 3 4
 2 3
*/
#include <iostream>

using namespace std;

int main()
{
  int temp,i,j,fnd;
  int num;
  cin>>num;
  int arr[num];
  for(i=0;i<num;i++)
  {
    cin >> arr[i];  
  }
  for(i=0;i<num;i++)
  {
      for(j=0;j<num;j++)
      {
          if(arr[i] < arr[j] )// sort
          {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
  }  
  
  for(i=0;i<num;i++) //ascending
  {
      cout<<arr[i]<<" ";
  }
  if(num%2!=0)
  {
      fnd=(num/2)+1; //odd
      for(i=fnd-1;i<fnd;i++)
      {
          cout<<"\n"<<arr[i];
      }
  }
  else
  {
      fnd=(num/2);  //even
      for(i=fnd-1;i<=fnd;i++)
      {
          cout<<arr[i];
      }
  }
    return 0;
}
