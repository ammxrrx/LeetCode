#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int num=nums[0];
        for (int i = 0; i < n; i++)
        {
            if (nums[i]==num)
            {
                count++;
            }
            if (count>n/2)
            {
                cout<<num<<endl;
                break;
            }
            
        }
        
    }
};

int main(){}