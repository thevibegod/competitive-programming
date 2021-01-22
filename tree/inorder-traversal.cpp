// https://practice.geeksforgeeks.org/problems/inorder-traversal/1
// Given a Binary Tree, find the In-Order Traversal of it.


// Return a vector containing the inorder traversal of the tree
void inOrderAppend(Node* root,vector<int> *nodes){
    if(root == nullptr){
        return;
    }
    inOrderAppend(root->left,nodes);
    nodes->push_back(root->data);
    inOrderAppend(root->right,nodes);
    return;
    
}
vector<int> inOrder(Node* root)
{
  vector<int> nodes;
  inOrderAppend(root,&nodes);
  return nodes;
}
