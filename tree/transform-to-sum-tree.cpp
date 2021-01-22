// https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1/

// Given a Binary Tree of size N , where each node can have positive or negative values. Convert this to a tree where each node contains the sum of the left and right sub trees of the original tree. The values of leaf nodes are changed to 0.

int toSumTreeNode(Node *node)
{   
    if(node==nullptr){
        return 0;
    }
    
        int left_val = toSumTreeNode(node->left);
        int right_val = toSumTreeNode(node->right);
        int val = node->data;
        node->data = left_val + right_val;
        return node->data + val;
 
}

void toSumTree(Node* node){
    toSumTreeNode(node);
}