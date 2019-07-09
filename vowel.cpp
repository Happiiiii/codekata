#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter: ";
    cin >> c;
   if(c >= 0 && c <=9 )
    {
        cout <<" invalid ";
    }
    else if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'u')
    {
        cout << "vowel" ;
    }
    else
    {
        cout << "Consonant";
    }

    return 0;
}
