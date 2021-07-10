/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

int findNodeRec(Node * head, int n) 
{
    if (head == NULL)
        return (-1);

    if (head -> data == n)
        return (0);
   
    head = head -> next;
    int ans = findNodeRec(head, n);
   
    if (ans == -1)
        return (-1);
    else
        return (1 + ans);
}
