// https://practice.geeksforgeeks.org/problems/preorder-traversal/1

// Given a binary tree, find its preorder traversal.

void preordertraversal(Node* root,vector<int>* nodes){
    if(root==nullptr){
        return;
    }
    nodes->push_back(root->data);
    preordertraversal(root->left,nodes);
    preordertraversal(root->right,nodes);
    return;
}

vector <int> preorder(Node* root)
{
  vector<int> nodes;
  preordertraversal(root,&nodes);
  return nodes;
}