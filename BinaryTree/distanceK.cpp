// print all nodes at distance k
// find the distance of all ancestors from target node 
// for all ancestor search other subtree nodes at (k-d)
#include<iostream>
#include<math.h>
#include<algorithm>
#include<queue>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right = NULL;
    }
};

// case 1
void printSubtreeNodes(Node *root, int k){
    if (root == NULL || k<0)
    {
        return;
    }
    if (k == 0)
    {
        cout<<root->data<<" ";
        return;
    }

    // in case k is greater than 0 than 
    printSubtreeNodes(root->left, k-1);
    printSubtreeNodes(root->right, k-1);
}
// case 2
int printNodesAtk(Node *root, Node *target, int k){
    if (root == NULL)
    {
        return -1;
    }
    // if target found then return subtreenodes
    if (root == target)
    {
        printSubtreeNodes(root,k);
        return 0;
    }
    // dl is distance d but it on left tree
    int dl = printNodesAtk(root->left,target, k);
    // if we found the target in left subtree then return 
    if (dl!=-1)
    {
        if (dl+1==k)
        {
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->right,k-dl-2);
        }
        return 1+dl;   
    }
    int dr= printNodesAtk(root->right,target, k);
    // if we found the target in right subtree then return 
    if (dr!=-1)
    {
        if (dr+1==k)
        {
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->left,k-dr-2);
        }
        return 1+dr; 
    }

    return -1;
}




int main(){



    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    printNodesAtk(root, root->left, 1);
    // cout<<endl;
    return 0;

}