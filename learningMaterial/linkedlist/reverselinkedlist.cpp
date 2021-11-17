#include<iostream>
using namespace std;

class node{
    public:
    int data;
    // here node* data types that points to next node 
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if (head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=n;
    
}

void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<" NULL"<<endl;
    
}
// iterative way of reverse linkedlist
// here return new head
node* reverse(node* &head){
    // makeing three pointer

    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
    
}
// recursive way to reverse linkedlist
node* reverseRecursive(node* &head){

    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node* newhead=reverseRecursive(head->next);
    // head ka next of next point to head
    head->next->next=head;
    // head ka next to point to null
    head->next=NULL;

    return newhead;
}

int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

    node* newhead= reverseRecursive(head);
    display(newhead);


    return 0;
}