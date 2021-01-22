// https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1

// Given a Binary Tree, your task is to find its level order traversal.

vector<vector<int>> levelOrder(Node* node)
{
  
  queue<Node*> nodeQueue;
  vector<vector<int>> nodes;
  nodeQueue.push(node);
  while(!nodeQueue.empty()){
      int i = 0,size = nodeQueue.size();
      vector<int> current_level_nodes;
      while(i<size){
          Node* current = nodeQueue.front();
          nodeQueue.pop();
          current_level_nodes.push_back(current->data);
          if(current->left != nullptr){
              nodeQueue.push(current->left);
          }
          if(current->right != nullptr){
              nodeQueue.push(current->right);
          }
          i++;
      }
      nodes.push_back(current_level_nodes);
  }
  return nodes;
}