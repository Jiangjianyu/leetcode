//
// Created by jjy on 21-12-27.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        vector<vector<int>> res;
        if (!root)
            return res;
        queue<TreeNode *> nodequeue;
        bool isleft = true;
        nodequeue.push(root);
        while (!nodequeue.empty()) {
            deque<int> rows;
            int size = nodequeue.size();
            for (int i = 0; i < size; ++i) {
                TreeNode *node = nodequeue.front();
                nodequeue.pop();
                if (isleft) {
                    rows.push_back(node->val);
                } else {
                    rows.push_front(node->val);
                }
                if (node->left) {
                    nodequeue.push(node->left);
                }
                if (node->right) {
                    nodequeue.push(node->right);
                }
            }
            res.emplace_back(vector<int>{rows.begin(), rows.end()});
            isleft = !isleft;
        }
        return res;

    }
};

int main() {

    return 0;
}