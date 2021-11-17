// Problem
// Find the distance between two nodes in a binary 
// tree. the distance between two nodes is the maximum number 
// of edges to be traversed to reach one node from another


//---------- startegy------------------
// Find the LCA(Lowest common ancestor)
// Find Distance between of n1 (d1) & n2(d2) from LCA
// return (d1+d2)

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

Node* LCA(Node *root, int n1, int n2){
    if (root == NULL)
    {
        return NULL;
    }
    // if n1 or n2 equL TO ROOT then return root
    if (root->data == n1 || root->data ==n2)
    {
        return root;
    }

    Node* left = LCA(root->left, n1, n2);
    Node* right = LCA(root->right, n1, n2);

    if (left!=NULL && right!=NULL)
    {
        return root;
    }
    if (left ==NULL && right == NULL)
    {
        return NULL;
    }
    if (left!=NULL)
    {
        return LCA(root->left,n1,n2);
    }
    // if
    return LCA(root->right, n1,n2);
}

int findDist(Node *root, int k, int dist){
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == k)
    {
        return dist;
    }

    int left = findDist(root->left, k , dist+1);

    if (left!=-1)
    {
        return left;
    }
    return findDist(root->right, k, dist+1);
    
    
    
}

int distBtwNodes(Node *root, int n1, int n2){
    Node *lca = LCA(root,n1,n2);
    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);

    return d1+d2;
}

int main(){



    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    // leftView(root);
    cout<<distBtwNodes(root, 4,5)<<endl;
    // cout<<endl;
    return 0;

}
