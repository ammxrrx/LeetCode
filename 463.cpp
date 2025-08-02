#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if (grid[i][j]==1)
                {
                    count+=4;
                    if (i>0&&grid[i-1][j]==1)
                    {
                        count-=2;
                    }
                    if (j>0&&grid[i][j-1]==1)
                    {
                        count-=2;
                    }
                }
            }
        }
        return count;
    }
};