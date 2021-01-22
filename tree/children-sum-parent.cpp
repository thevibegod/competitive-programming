// https://practice.geeksforgeeks.org/problems/children-sum-parent/1

// Given a Binary Tree. Check whether all of its nodes have the value equal to the sum of their child nodes.

int isSumProperty(Node *root)
{
    queue<Node*> nodeQueue;
    nodeQueue.push(root);
    while(!nodeQueue.empty()){
        Node* current = nodeQueue.front();
        nodeQueue.pop();
        int sum = 0;
        if(current->left != nullptr && current->right != nullptr){
            sum = current->left->data + current->right->data;
            nodeQueue.push(current->left);
            nodeQueue.push(current->right);
        }else if(current->left != nullptr){
            sum = current->left->data;
            nodeQueue.push(current->left);
        }else if(current->right != nullptr){
            sum = current->right->data;
            nodeQueue.push(current->right);
        }else{
            continue;
        }
        if(sum!=current->data){
            return false;
        }
    }
    return true;
}