/*
Mirror Tree Problem
Author: Ishita Das

Approach: 
Here we wanted to find out a tree which will look like the mirror image of the given input binary tree. I have used a recursive approach to solve this problem. We ultimately wish to swap all the left children with the right children.

*/
/* A Binary Tree node
class Node
{
    int data;
    Node left, right;
   Node(int item)    
   {
        data = item;
        left = right = null;
    }
} */
class Tree
{
    void mirror(Node node)
    {
        
        if(node==null)
            return;
        if(node.left==null&&node.right==null)
            return;
        mirror(node.left);
        mirror(node.right);
        Node n=node.left;
        node.left=node.right;
        node.right=n;
        
        
    }
}