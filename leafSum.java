class GfG
{   int sum=0;
    public int SumofLeafNodes(Node root)
    {
        // your code here
        
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