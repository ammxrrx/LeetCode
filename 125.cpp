#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string real="";
        string temp="";
        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
            {
                real+=tolower(s[i]);
            }
        }
        for (int i = 0; i < real.length(); i++)
        {
            temp+=real[real.length()-1-i];
        }
        if (real==temp)
        {
            return true;
        }
        return false;
    }
};

int main(){
    Solution meow;
    string mee="A man, a plan, a canal: Panama";
    if (meow.isPalindrome(mee))
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}