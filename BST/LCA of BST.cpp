bool helper(BinaryTreeNode < int > * root, int s) 
{    
	if (root == NULL)
        return (0);
    else if (root -> data == s)
        return (1);
    
	if (root -> data > s)
        return (helper(root -> left, s));
    else if (root -> data < s)
        return (helper(root -> right, s));
}

int ans = 0;

void helper1(BinaryTreeNode < int > * root, int val1, int val2) 
{
    if (root == NULL)
        return;
    
	bool val1r = helper(root, val1);
    bool val2r = helper(root, val2);
    
	if (val1r == 1 && val2r == 1)
        ans = root -> data;
    
	helper1(root -> left, val1, val2);
    helper1(root -> right, val1, val2);
}

int getLCA(BinaryTreeNode < int > * root, int val1, int val2) 
{
    bool valp1 = helper(root, val1);
    bool valp2 = helper(root, val2);
    
	if (valp1 == 0 && valp2 == 0)
	{
        return (-1);
    }
    else if (valp1 == 1 && valp2 == 0)
    {
        return (val1);
    }
    else if (valp2 == 1 && valp1 == 0)
    {
        return (val2);
    }
    else
	{
        helper1(root, val1, val2);
        return (ans);
    }
}
