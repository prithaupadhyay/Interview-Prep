
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