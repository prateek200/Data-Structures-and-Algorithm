BinaryTreeNode < int > * buildhelpTree(int * in , int * pos, int ins, int ine, int poss, int pose) {
    if (ins > ine)
        return NULL;
    int rootdata = pos[pose];
    int rootindex;
    for (int i = ins; i <= ine; i++)
        if ( in [i] == rootdata) {
            rootindex = i;
            break;
        }
    int lins = ins;
    int line = rootindex - 1;
    int rins = rootindex + 1;
    int rine = ine;
    int lposs = poss;
    int lpose = pose - (ine - rootindex) - 1;
    int rposs = pose - (ine - rootindex);
    int rpose = pose - 1;

    BinaryTreeNode < int > * root = new BinaryTreeNode < int > (rootdata);
    root -> left = buildhelpTree( in , pos, lins, line, lposs, lpose);
    root -> right = buildhelpTree( in , pos, rins, rine, rposs, rpose);
    return (root);
}

BinaryTreeNode < int > * getTreeFromPostorderAndInorder(int * post, int ine, int * in , int inLength) 
{
    return (buildhelpTree( in , post, 0, ine - 1, 0, ine - 1));
}
