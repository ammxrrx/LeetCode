#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void getAllSubsets(vector<int>& nums,vector<int>subset,int i,vector<vector<int>> &allSubsets){
        if (i==nums.size())
        {
            allSubsets.push_back({subset});
            return;   
        }
        subset.push_back(nums[i]);
        getAllSubsets(nums,subset,i+1,allSubsets);
        subset.pop_back();
        getAllSubsets(nums,subset,i+1,allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector <int> ans;
        getAllSubsets(nums,ans,0,allSubsets);
        return allSubsets;
    }
};