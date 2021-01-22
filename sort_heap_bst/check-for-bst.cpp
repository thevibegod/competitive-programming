// https://practice.geeksforgeeks.org/problems/check-for-bst/1/

// Given a binary tree. Check whether it is a BST or not.

bool helper(Node* node,int min,int max){
    if(node==nullptr){
        return true;
    }
    if(node->data<min || node->data>max){
        return false;
    }
    return helper(node->left,min,node->data-1) && helper(node->right,node->data,max);
}
bool isBST(Node* root) {
  return helper(root,INT32_MIN,INT32_MAX);
}
