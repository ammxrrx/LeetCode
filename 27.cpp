#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=nums.size();
        int k=0;
        for (int i = 0; i < len; i++)
        {
            if (val!=nums[i])
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

