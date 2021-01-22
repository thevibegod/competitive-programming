// https://practice.geeksforgeeks.org/problems/sum-tree/1

// Given a Binary Tree. Check whether it is a Sum Tree or not.
// A Binary Tree is a Sum Tree in which value of each node x is equal to sum of nodes present in its left subtree and right subtree . An empty tree is also a Sum Tree as sum of an empty tree can be considered to be 0. A leaf node is also considered as a Sum Tree.

int sum(Node* node){
    if(node==nullptr){
        return 0;
    }
    return node->data+sum(node->left)+sum(node->right);
}

bool isSumTree(Node* node)
{
    if(node==nullptr||node->left==nullptr&&node->right==nullptr){
        return true;
    }
    return (node->data == (sum(node->left)+sum(node->right))) && isSumTree(node->left) && isSumTree(node->right);
}