/*


57 - Given 2 numbers N and K followed by n numbers print the number of repetitions of K.
Sample Testcase :
INPUT
4 3
1 2 3 3
OUTPUT
2
*/

 
        
        #include <iostream>
        #include<string>
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
         
         cout<<count;
            return 0;
        }
