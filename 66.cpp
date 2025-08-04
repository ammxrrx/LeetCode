#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool meow=false;
        for (int i = digits.size()-1; i >=0; i--)
        {
            if (digits[i]==9)
            {
                digits[i]=0;
            }
            else{
                meow=true;
                digits[i]++;
                break;
            }
        }
        if (meow==true)
        {
            return digits;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main(){
    Solution s;
    vector <int> a{9,9,9};
    a=s.plusOne(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}