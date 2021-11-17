// Algorithm
// 1.Pick element from preorder & create a node
// 2.Increment Preorder idx
// 3.Search for picked element's pos inorder
// 4.Call to build left subtree from inorder's 0 to pos-1
// 5.Call to buld right subtree from inorder pos+1 to n
// Return the node

// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// /* Prototypes for utility functions */
// int search(int inorder[], int start, int end, int curr)
// {
//     for (int i = start; i <= end; i++)
//     {
//         if (inorder[i] == curr)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// Node *newNode(char data);

// Node *buildTree(int preorder[], int inorder[], int start, int end)
// {
//     static int idx = 0;
//     if (start > end)
//     {
//         return NULL;
//     }

//     int curr = preorder[idx];
//     idx++;
//     Node *node = new Node(curr);
//     if (start = end)
//     {
//         return node;
//     }

//     int pos = search(inorder, start, end, curr);
//     node->left = buildTree(preorder, inorder, start, pos - 1);
//     node->right = buildTree(preorder, inorder, pos + 1, end);

//     return node;
// }

// void inorderPrint(Node* root){
//     if (root==NULL)
//     {
//         return;
//     }
    
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }
// int main()
// {
//     // struct Node *root = new Node(1);
//     // root->left = new Node(2);
//     // root->right = new Node(3);
//     // root->left->left = new Node(4);
//     // root->left->right = new Node(5);
//     // root->right->left = new Node(6);
//     // root->right->right = new Node(7);

//     // preorder(root);
//     // inorder(root);
//     int preorder[] = {1, 2, 4, 3, 5};
//     int inorder[] = {4, 2, 1, 5, 3};
//     Node* root = buildTree(preorder,inorder,0,4);
//     inorderPrint(root);

//     return 0;
// }



/* C++ program to construct tree using
inorder and preorder traversals */
// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class node
{
	public:
	char data;
	node* left;
	node* right;
};

/* Prototypes for utility functions */
int search(char arr[], int strt, int end, char value);
node* newNode(char data);

/* Recursive function to construct binary
of size len from Inorder traversal in[]
and Preorder traversal pre[]. Initial values
of inStrt and inEnd should be 0 and len -1.
The function doesn't do any error checking
for cases where inorder and preorder do not
form a tree */
node* buildTree(char in[], char pre[], int inStrt, int inEnd)
{
	static int preIndex = 0;

	if (inStrt > inEnd)
		return NULL;

	/* Pick current node from Preorder
	traversal using preIndex
	and increment preIndex */
	node* tNode = newNode(pre[preIndex++]);

	/* If this node has no children then return */
	if (inStrt == inEnd)
		return tNode;

	/* Else find the index of this node in Inorder traversal */
	int inIndex = search(in, inStrt, inEnd, tNode->data);

	/* Using index in Inorder traversal, construct left and
	right subtress */
	tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
	tNode->right = buildTree(in, pre, inIndex + 1, inEnd);

	return tNode;
}

/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end]
The function assumes that value is present in in[] */
int search(char arr[], int strt, int end, char value)
{
	int i;
	for (i = strt; i <= end; i++)
	{
		if (arr[i] == value)
			return i;
	}
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(char data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

/* This funtcion is here just to test buildTree() */
void printInorder(node* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder(node->left);

	/* then print the data of node */
	cout<<node->data<<" ";

	/* now recur on right child */
	printInorder(node->right);
}

/* Driver code */
int main()
{
	char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
	char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
	int len = sizeof(in) / sizeof(in[0]);
	node* root = buildTree(in, pre, 0, len - 1);

	/* Let us test the built tree by
	printing Insorder traversal */
	cout << "Inorder traversal of the constructed tree is \n";
	printInorder(root);
}

// This is code is contributed by rathbhupendra
