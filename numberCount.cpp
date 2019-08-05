#include <iostream>
using namespace std;

int main() {
    char str[100];
	int i,count=0;
	cin.getline(str,100);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
			count++;
	}
	cout<<count;
	return 0;
}
