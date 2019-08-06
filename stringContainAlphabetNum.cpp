/*


56 - Given a string S, check if it contains both alphabets and numbers.
Input Size :  |s| <= 1000
Sample Testcase :
INPUT
Helloworld.123
OUTPUT
Yes 
*/
        /******************************************************************************
        
                                      Online C++ Compiler.
                       Code, Compile, Run and Debug C++ program online.
        Write your code in this editor and press "Run" button to compile and execute it.
        
        *******************************************************************************/
        
        #include <iostream>
        #include<string>
        using namespace std;
        
        int main()
        {
            string str;
            int flag = 1;
            
            getline(cin, str);
            
            for(int i=0;i<str.length();i++)
            {
                if(isdigit(str[i]) || isalpha(str[i]) || str[i] == ' ')
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            
            if(flag == 1)
            {
                cout << "Yes";
            }
            else
                cout << "No";
            return 0;
        }

