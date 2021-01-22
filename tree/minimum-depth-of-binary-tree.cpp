// https://leetcode.com/problems/minimum-depth-of-binary-tree/

// Given a binary tree, find its minimum depth.
// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

class Solution {
public:
    int minDepth(TreeNode* root) {
        int depth=0;
        queue<TreeNode*> nodes;
        if(root==nullptr){
            return 0;
        }
        nodes.push(root);
        while(!nodes.empty()){
            depth++;
            int i = 0,s=nodes.size();
            while(i<s){
                TreeNode* node = nodes.front();
                nodes.pop();
                if(node->left == nullptr && node->right == nullptr){
                    return depth;
                }
                if(node->left != nullptr){
                    nodes.push(node->left);
                }
                if(node->right != nullptr){
                    nodes.push(node->right);
                }
                    i++;
                }
            
        }
        return depth;
    }
};