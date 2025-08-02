#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        int diff=0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i]<min)
            {
                min=prices[i];
            }
            else{
                max=prices[i];
                if ((max-min)>diff)
                {
                    diff=max-min;
                }
                
            }
        }
        return diff;
    }
};

int main(){
    vector<int> a{2,4,1};    
    Solution s1;
    cout<<s1.maxProfit(a)<<endl;
    return 0;
}