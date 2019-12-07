#include <bits/stdc++.h> 
using namespace std; 
  
// structure of a node of binary tree 
struct Node { 
    int data; 
    Node *left, *right; 
}; 
  
// function to get a new node 
Node* getNode(int data) 
{ 
    // allocate space 
    Node* newNode = (Node*)malloc(sizeof(Node)); 
  
    // put in the data 
    newNode->data = data; 
    newNode->left = newNode->right = NULL; 
    return newNode; 
} 
  
// function to check whether a binary tree 
// is a full binary tree or not 
bool isFullBinaryTree(Node* root) 
{ 
    // if tree is empty 
    if (!root) 
        return true; 
  
    // queue used for level order traversal 
    queue<Node*> q; 
  
    // push 'root' to 'q' 
    q.push(root); 
  
    // traverse all the nodes of the binary tree 
    // level by level until queue is empty 
    while (!q.empty()) { 
        // get the pointer to 'node' at front 
        // of queue 
        Node* node = q.front(); 
        q.pop(); 
  
        // if it is a leaf node then continue 
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
  
    // binary tree is a full binary tee 
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