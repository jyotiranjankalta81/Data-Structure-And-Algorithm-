#include <iostream>
using namespace std;

// node is user defined
class node
{
public:
    int data;
    // here node* data types that points to next node
    node *next;
    // make a constructor for easy work
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    // create a node and add value
    node *n = new node(val);
    // now n of next point to the first node
    n->next = head;
    // now move head to n
    head = n;
}

void insertAtTail(node *&head, int val)
{
    // create a new node
    node *n = new node(val);
    // if there is no node in linked list then
    if (head == NULL)
    {
        head = n;
        return;
    }
    // traverse to last linkedlist start form start till end
    // starting form start
    node *temp = head;
    // traverse till next is null
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // now add the new node
    temp->next = n;
}

// for print linkedlist
void display(node *head)
{
    // temp node start form head
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << " NULL" << endl;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    cout << search(head, 3) << endl;

    return 0;
}