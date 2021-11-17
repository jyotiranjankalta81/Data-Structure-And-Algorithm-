#include <iostream>
using namespace std;

class node
{
public:
    int data;
    // here node* data types that points to next node
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << " NULL" << endl;
}
// reverse knodes
node *reversek(node *&head, int k)
{
    // create 3 pointer
    if (!head)
        return NULL;
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }

    return prevptr;
}
int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    // insertAtTail(head, 6);
    // insertAtTail(head, 7);
    // insertAtTail(head, 8);
    // insertAtTail(head, 9);
    display(head);
    int k = 3;
    node *newhead = reversek(head, k);
    display(newhead);

    // node* newhead= reverseRecursive(head);
    // display(newhead);

    return 0;
}