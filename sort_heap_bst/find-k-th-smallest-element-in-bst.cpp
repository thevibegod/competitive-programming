// https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1/

// Given a BST and an integer K. Find the Kth Smallest element in the BST. 

void inOrder(Node* node,int k,int &count,bool &found,int &return_val){
    if(node==nullptr || found){
        return;
    }
    inOrder(node->left,k,count,found,return_val);
    count++;
    if(count==k){found=true;return_val=node->data;return;}
    inOrder(node->right,k,count,found,return_val);
}

// Return the Kth smallest element in the given BST 
int KthSmallestElement(Node *root, int K)
{
   int count=0,return_val=-1;
   bool found = false;
   inOrder(root,K,count,found,return_val);
   return return_val;
}