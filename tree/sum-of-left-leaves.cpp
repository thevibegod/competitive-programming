// https://leetcode.com/problems/sum-of-left-leaves/

// Find the sum of all left leaves in a given binary tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int sumOfLeftLeaves(TreeNode* root) {
    queue<TreeNode*> nodeQueue;
    int sum = 0;
    if(root==nullptr){
        return sum;
    }
    nodeQueue.push(root);
    while(!nodeQueue.empty()){
        TreeNode* current = nodeQueue.front();
        nodeQueue.pop();
        if(current->left != nullptr && current->right != nullptr){
            if(current->left->left==nullptr && current->left->right==nullptr){
                sum += current->left->val;
            }
            nodeQueue.push(current->left);
            nodeQueue.push(current->right);
        }else if(current->left != nullptr){
            if(current->left->left==nullptr && current->left->right==nullptr){
                sum += current->left->val;
            }
            nodeQueue.push(current->left);
        }else if(current->right != nullptr){
            nodeQueue.push(current->right);
        }else{
            continue;
        }
    }
    return sum;
    }
};