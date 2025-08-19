#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int findClosestNumber(vector<int>& nums) {
            int x = nums[0];
            for (int i = 1; i < nums.size(); i++)
            {
                int temp;
                int temp2;
                if (nums[i]<0)
                {
                    temp = -nums[i];
                }
                else{
                    temp = nums[i];
                }
                if (x < 0) {
                    temp2 = -x;
                } else {
                    temp2 = x;
                }
                if (temp<temp2)
                {
                    x = nums[i];
                }
                else if(temp == temp2 && nums[i] > x) {
                    x = nums[i];
                }
            }
            cout << x << endl;
            return x;
        }
};

int main(){
    vector<int> meow = {-100000, -100000};
    Solution s;
    s.findClosestNumber(meow);
    return 0;
}