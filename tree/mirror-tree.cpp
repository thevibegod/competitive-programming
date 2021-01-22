// https://practice.geeksforgeeks.org/problems/mirror-tree/1/

// Given a Binary Tree, convert it into its mirror.

void mirror(Node* node) 
{
     if(node==nullptr){
         return;
     }
     Node* temp = node->left;
     node->left = node->right;
     node->right = temp;
     mirror(node->left);
     mirror(node->right);
     return;
}