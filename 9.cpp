#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int og=x;
        long long newNum=0;
        if (x<0)
        {
            return false;
        }
        while (x!=0)
        {
            newNum = newNum * 10 + (x % 10);
            x=x/10;
        }
        if (newNum==og)
        {
            return true;
        }
        return false;
    }
};