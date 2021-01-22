// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

// Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. Given a binary tree, print the top view of it. The output nodes can be printed in any order.

void helper(Node *node,unordered_map<int,int> &map,int distance){
    if(node==nullptr){
        return;
    }
    helper(node->left,map,distance-1);
    helper(node->right,map,distance+1);
    map[distance] =node->data;
    return;
}

// function should print the topView of the binary tree
void topView(struct Node *root)
{
    unordered_map<int,int> map;
    helper(root,map,0);
    vector<int> levels;
    for(auto iter:map){
        levels.push_back(iter.first);
    }
    sort(levels.begin(),levels.end());
    for(auto level:levels){
        cout<<map.find(level)->second<<" ";
    }
}
