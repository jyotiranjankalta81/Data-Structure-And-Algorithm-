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

void insertAtHead(node* &head, int val){
    node* n= new node(val);
    if (head==NULL)
    {
        n->next=n;
        head=n;
        return;
        
    }
    
    // n->next=head;
    node* temp = head;
    while (temp->next!=head)
    {
        temp=temp->next;
        // temp->next=n;
        // n->next=head;
    }
    temp->next=n;
    n->next=head;
    head=n;

}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if (head==NULL)
    {
        insertAtHead(head,val);
        // head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=head)
    {
        temp=temp->next;
        // temp->next=n;
        
    }

    temp->next=n;
    n->next=head;
    
}
void deleteAtHead(node* &head){
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
    
}

// create a function node as a head and pos is the key deletion of element
void deletion(node* &head, int pos){

    if (pos==1)
    {
        deleteAtHead(head);
        return;
    }
    
    // for traverse create a temp node
    node* temp=head;
    // make a counter & start from 1; 
    int count = 1;

    while (count!=pos-1)
    {
        temp=temp->next;
        count++;
    }

    node* todelete=temp->next;
    temp->next=temp->next->next;
    

}
void display(node* head){
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    
    cout<<endl;
    
}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
        
    }
    return false;
}

int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    insertAtHead(head,5);
    display(head);

    deletion(head,5);
    display(head);
    // cout<<search(head,3)<<endl;


    return 0;
}