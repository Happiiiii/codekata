/*


60 - Write a program to print the sum of the first K natural numbers.
Input Size : n <= 100000
Sample Testcase :
INPUT
3
OUTPUT
6 
*/


#include <iostream>
using namespace std;
int main() 
{
	int n,sum=0;
	cin>>n;
	sum=(n*(n+1))/2;
	cout<<sum;
	return 0;
}
