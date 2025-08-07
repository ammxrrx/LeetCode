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
        helper(root->left, meow);
        helper(root->right, meow);
        meow.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> meow;
        helper(root, meow);
        return meow;
    }
};