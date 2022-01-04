//
// Created by jjy on 21-12-27.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

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
    vector<int> inorderTraversal(TreeNode *root) {
        if (!root)
            return vector<int> {};
        TreeNode* ptr = root;
        vector<int> res;
        stack<TreeNode*> s;
        while (ptr || !s.empty()){
            while (ptr){
                s.push(ptr);
                ptr = ptr->left;
            }
            TreeNode* node = s.top();
            res.push_back(node->val);
            s.pop();
            ptr = node->right;

        }
        return res;


    }
};

int main(){

    return 0;
}