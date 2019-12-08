/*
Description: (Issue in Progress)
Author: Ishita Das

Approach: (Issue in Progress)
*/
class GfG
{   int sum=0;
    public int SumofLeafNodes(Node root)
    {
        if(root==null)
            return 0;
        if(root.left ==null && root.right==null){
            sum+=root.data;
        }
        SumofLeafNodes(root.left);
        
        SumofLeafNodes(root.right);
        
        return sum;
        
    }
}