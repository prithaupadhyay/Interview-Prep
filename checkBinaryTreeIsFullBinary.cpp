/*
Check if a Binary Tree is a Full Binary Tree or not.
Author: Pritha Upadhyay

Approach: 
Idea is to use an iterative approach. We performed iterative level order traversal of the tree using queue. For each node encountered, follow the steps given below:
- If (node->left == NULL && node->right == NULL), it is a leaf node. Discard it and start processing the next node from the queue.
- If (node->left == NULL || node->right == NULL), then it means that only child of node is present. Return false as the binary tree is not a full binary tree.
- Else, push the left and right child’s of the node on to the queue.

If all the nodes from the queue gets processed without returning false, then return true as the binary tree is a full binary tree.
*/
#include <bits/stdc++.h> 
using namespace std; 
struct Node { 
    int data; 
    Node *left, *right; 
}; 
  
Node* getNode(int data) 
{ 
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data; 
    newNode->left = newNode->right = NULL; 
    return newNode; 
} 
  
bool isFullBinaryTree(Node* root) 
{ 
    if (!root) 
        return true; 
  
    queue<Node*> q; 
 
    q.push(root); 

    while (!q.empty()) { 
        Node* node = q.front(); 
        q.pop(); 
  
        if (node->left == NULL && node->right == NULL) 
            continue; 
  
        // if either of the child is not null and the 
        // other one is null, then binary tree is not 
        // a full binary tee 
        if (node->left == NULL || node->right == NULL) 
            return false; 
  
        // push left and right childs of 'node' 
        // on to the queue 'q' 
        q.push(node->left); 
        q.push(node->right); 
    } 

    return true; 
} 
  
int main() 
{ 
    Node* root = getNode(1); 
    root->left = getNode(2); 
    root->right = getNode(3); 
    root->left->left = getNode(4); 
    root->left->right = getNode(5); 
  
    if (isFullBinaryTree(root)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 