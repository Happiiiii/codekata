    #include <iostream>  
    using namespace std;  
    int main() {  
      int n1=1,n2=1,n3,i,num;    
     cin>>num;    
     cout<<n1<<" "<<n2<<" "; 
     for(i=2;i<num;++i) 
     {    
      n3=n1+n2;    
      cout<<n3<<" ";    
      n1=n2;    
      n2=n3;    
     }    
       return 0;  
       }  
