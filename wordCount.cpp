#include <iostream>
using namespace std;

int main() {
char str[1000];
int i,count=1;
cin.getline(str,1000);
for(i=0;str[i]!='\0';i++)
{
    if(str[i]==' ')
    count++;
}
cout<<count;
	return 0;
}
