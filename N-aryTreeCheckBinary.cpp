/*
Check if the given n-ary tree is a binary tree
Author: Pritha Upadhyay

Example:
Input:  
      A
    /  \
   B    C
  / \    \
 D   E    F

Output: Yes

Input:  
      A
    / | \
   B  C  D
          \
           F
 
Output: No


Approach: 
Every node in a binary tree can have at most 2 children. So, for every node of the given tree, count the number of children and if for any node the count exceeds 2 then print No else print Yes.
*/

#include <bits/stdc++.h> 
using namespace std; 
  
struct Node { 
    char key; 
    vector<Node*> child; 
}; 
  
Node* newNode(int key) 
{ 
    Node* temp = new Node; 
    temp->key = key; 
    return temp; 
} 

bool isBinaryTree(struct Node* root) 
{ 
    if (!root) 
        return true; 

    int count = 0; 
    for (int i = 0; i < root->child.size(); i++) { 
   
        if (!isBinaryTree(root->child[i])) 
            return false; 

        count++; 
  
        if (count > 2) 
            return false; 
    } 
    return true; 
} 

int main() 
{ 
    Node* root = newNode('A'); 
    (root->child).push_back(newNode('B')); 
    (root->child).push_back(newNode('C')); 
    (root->child[0]->child).push_back(newNode('D')); 
    (root->child[0]->child).push_back(newNode('E')); 
    (root->child[1]->child).push_back(newNode('F')); 
  
    if (isBinaryTree(root)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 