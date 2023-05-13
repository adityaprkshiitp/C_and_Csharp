#include<iostream>
#include<cstdlib>
using namespace std;

bool isPalindrome(string str)
{
    for(int i = 0; i <= str.length()-1; i++)
    {
        if(str[i] != str[str.length()-1-i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int a = s.length();
        if(isPalindrome(s)){
            for (int i = 0; i < a - 1; i++)
            {
                char c = s[a - i];
                s[i] = 
            }
            
        }
    
    return 0;
}