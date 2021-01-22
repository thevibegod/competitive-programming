// https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1/

// Given a Binary Search Tree and a node value X, find if node with value X is present in the BST or not. 

bool search(Node* root, int x)
{
    if(root==nullptr){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data<=x){
        return search(root->right,x);
    }
    return search(root->left,x);
}
