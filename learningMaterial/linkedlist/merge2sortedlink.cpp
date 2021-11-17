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

// create a function that return the head of the merge linked list

node* merge(node* &head1, node* &head2){

    node* p1=head1;
    node* p2=head2;
    // dummyNode is not a pointer is a node
    node* dummyNode= new node(-1);
    node* p3 = dummyNode;

    while (p1!=NULL && p2!=NULL)
    {
        // if p1 data less than p2 data then add p1 to p3 next
        if (p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
        
    }
    // check the linked lists are 
    // one or both

    while (p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while (p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummyNode->next;
    
    
}

// we can do it via recursive way
node* mergeRecursive(node* &head1, node* &head2){

    if (head1==NULL)
    {
        return head2;
    }
    if (head2==NULL)
    {
        return head1;
    }
    
    // make a result node
    node* result;
    // check the data which low in head1 & head2
    if (head1->data<head2->data)
    {
        // then return head1 data in result node
        result = head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    return result;
    
}

int main(){

    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6};
    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head1,arr1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        insertAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);

    node* newhead=mergeRecursive(head1,head2);
    display(newhead);
    
    


    return 0;
}