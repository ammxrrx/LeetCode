#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;      //-1 because 0 based hai 
        int area =0;
        int tempArea=0;
        while (left<right)
        {
            
            if (height[left]<height[right])
            {
                area=height[left]*(right-left);
                left++;
            }
            else {
                area=height[right]*(right-left);
                right--;
            }
            if (area>tempArea)
            {
                tempArea=area;
            }
        }
        return tempArea;
    }
};