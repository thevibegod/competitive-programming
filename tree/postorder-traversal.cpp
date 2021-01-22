// https://practice.geeksforgeeks.org/problems/postorder-traversal/1

// Given a binary tree, find the Postorder Traversal of it.

void postordertraversal(Node* root,vector<int> &nodes){
    if(root==nullptr){
        return;
    }
    postordertraversal(root->left,nodes);
    postordertraversal(root->right,nodes);
    nodes.push_back(root->data);
    return;
}

vector <int> postOrder(Node* root)
{
  vector<int> nodes;
  postordertraversal(root,nodes);
  return nodes;
}