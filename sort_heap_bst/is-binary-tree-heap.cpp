// https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1/

// Given a binary tree you need to check if it follows max heap property or not.

bool isHeap(Node * tree)
{
 if(tree==nullptr){
     return true;
 }
 bool val = true;
 if(tree->left!=nullptr&&tree->data<tree->left->data){
     val = false;
 }
 if(tree->right!=nullptr&&tree->data<tree->right->data){
     val = false;
 }
 return val&&isHeap(tree->left)&&isHeap(tree->right);
}