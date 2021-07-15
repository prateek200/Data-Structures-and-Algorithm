void deleteAlternateNodes(Node * head) 
{
    Node * temp = head;
    
    if (temp == NULL)
        return;
    
    while (temp != NULL) 
    {
        Node * help = temp -> next;
        
        if (help == NULL)
            break;
        
        help = help -> next;
        temp -> next = help;
        temp = help;
    }

}
