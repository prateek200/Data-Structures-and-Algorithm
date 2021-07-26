// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/


BinaryTreeNode < int > * buildhelpTree(int * in , int * pre, int ins, int ine, int pres, int pree) 
{
    if (ins > ine)
        return NULL;
    
    int rootdata = pre[pres];
    int rootindex;
    
    for (int i = ins; i <= ine; i++)
        if ( in [i] == rootdata) 
        {
            rootindex = i;
            break;
        }
    
    int lins = ins;
    int line = rootindex - 1;
    int rins = rootindex + 1;
    int rine = ine;
    int lpres = pres + 1;
    int lpree = line - lins + lpres;
    int rpres = lpree + 1;
    int rpree = pree;

    BinaryTreeNode < int > * root = new BinaryTreeNode < int > (rootdata);
    root -> left = buildhelpTree( in , pre, lins, line, lpres, lpree);
    root -> right = buildhelpTree( in , pre, rins, rine, rpres, rpree);
}

BinaryTreeNode < int > * buildTree(int * preorder, int preLenght, int * inorder, int inLength) {
    return (buildhelpTree(inorder, preorder, 0, inLength - 1, 0, inLength - 1));
}
