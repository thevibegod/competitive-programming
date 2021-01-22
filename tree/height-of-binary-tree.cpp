// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1/?category[]=Tree&category[]=Tree&page=1&query=category[]Treepage1category[]Tree

// Given a binary tree, find its height

class Solution{
    public:
    int height(struct Node* node){
        if(node==nullptr){
            return 0;
        }
        queue<Node*> nodeQueue;
        int depth = 0;
        nodeQueue.push(node);
        while(!nodeQueue.empty()){
            depth++;
            int size = nodeQueue.size(),i=0;
            while(i<size){
                Node* current = nodeQueue.front();
                nodeQueue.pop();
                if(current->left!=nullptr){
                    nodeQueue.push(current->left);
                }
                if(current->right!=nullptr){
                    nodeQueue.push(current->right);
                }
                i++;
            }
        }
        return depth;
    }
};