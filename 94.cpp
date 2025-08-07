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
        meow.push_back(root->val);
        helper(root->right, meow);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> meow;
        helper(root, meow);
        return meow;
    }
};