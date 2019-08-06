/*


56 - Given a string S, check if it contains both alphabets and numbers.
Input Size :  |s| <= 1000
Sample Testcase :
INPUT
Helloworld.123
OUTPUT
Yes 
*/
      
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
                if(isdigit(str[i]) || isalpha(str[i]) || str[i] == '.' || str[i] == '_')
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



