#include <iostream>
using namespace std;
 
int main()
{
int n,st,diff;
 int res=0;
 cin>>n>>st>>diff;
 for(int i=0;i<n;i++)
 {
     res=res+st;
     st=st+diff;
 }
cout<<res<<endl;
    return 0;
}
