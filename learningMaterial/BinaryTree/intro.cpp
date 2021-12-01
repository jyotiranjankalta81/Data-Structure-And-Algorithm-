#include <iostream>
using namespace std;

struct Node
{
    // in this node we store some integer data
    int data;
    // make one pointer to point left child and another point to right child
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        // this node value assign to data
        data = val;
        // left child initialize with null and right also same
        left = NULL;
        right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
}