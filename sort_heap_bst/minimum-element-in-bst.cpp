// https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1/

// Given a Binary Search Tree. The task is to find the minimum element in this given BST.

int minValue(Node* root)
{
   if(root==nullptr){
       return -1;
   }
   if(root->left!=nullptr){
       return minValue(root->left);
   }
   return root->data;
}