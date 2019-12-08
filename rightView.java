/*
Description: (Issue in Progress)
Author: Ishita Das

Approach: (Issue in Progress)
*/
class Tree{
    int max = 0;
    Node root;
    void rightViewUtil(Node node, int level){
    
    if(node == null){
        return;
    }
    if(max<level){
        //System.out.print(level+ " "+max);
        System.out.print(node.data + " ");
        max=level;
    }
    rightViewUtil(node.right,level+1);
    rightViewUtil(node.left,level+1);
}
void rightView(Node root)
{
   // Your Code here
   rightViewUtil(root,1);
}

}
