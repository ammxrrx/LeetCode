#include <iostream>
#include <vector>
using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void helper(TreeNode* root, vector<int>& meow) {
        if (root == nullptr){
            return;
        }
        meow.push_back(root->val);
        helper(root->left, meow);
        helper(root->right, meow);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> meow;
        helper(root, meow);
        return meow;
    }
};