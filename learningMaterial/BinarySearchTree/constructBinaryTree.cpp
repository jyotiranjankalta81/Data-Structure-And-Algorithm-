/* A O(n) program for construction
of BST from preorder traversal */
// #include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

#define INT_MIN (-2147483647 - 1)
#define INT_MAX 2147483647

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class node
{
public:
	int data;
	node *left;
	node *right;
};

// A utility function to create a node
node *newNode(int data)
{
	node *temp = new node();

	temp->data = data;
	temp->left = temp->right = NULL;

	return temp;
}

// A recursive function to construct
// BST from preorder[]. preIndex is usedc
// to keep track of index in preorder[].
node *constructTreeUtil(int preorder[], int *preIndex, int key,
						int min, int max, int size)
{
	// Base case
	if (*preIndex >= size)
		return NULL;

	node *root = NULL;

	// If current element of preorder[] is in range, then
	// only it is part of current subtree
	if (key > min && key < max)
	{
		// Allocate memory for root of this
		// subtree and increment *preIndex
		root = newNode(key);
		*preIndex = *preIndex + 1;

		if (*preIndex < size)
		{
			// Construct the subtree under root
			// All nodes which are in range
			// {min .. key} will go in left
			// subtree, and first such node
			// will be root of left subtree.
			root->left = constructTreeUtil(preorder, preIndex,
										   preorder[*preIndex],
										   min, key, size);
		}
		if (*preIndex < size)
		{
			// All nodes which are in range
			// {key..max} will go in right
			// subtree, and first such node
			// will be root of right subtree.
			root->right = constructTreeUtil(preorder, preIndex,
											preorder[*preIndex],
											key, max, size);
		}
	}

	return root;
}

// The main function to construct BST
// from given preorder traversal.
// This function mainly uses constructTreeUtil()
// node* constructTree(int preorder[], int size)
// {
// 	int preIndex = 0;
// 	return constructTreeUtil(preorder, &preIndex, preorder[0],
// 							INT_MIN, INT_MAX, size);
// }

// A utility function to print inorder
// traversal of a Binary Tree
void printPreorder(node *node)
{
	if (node == NULL)
		return;
	cout << node->data << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

// Driver code
int main()
{
	int preorder[] = {10, 5, 1, 7, 60, 50};
	int size = sizeof(preorder) / sizeof(preorder[0]);

	// Function call
	// node* root = constructTree(preorder, size);
	int preIndex = 0;
	node *root = constructTreeUtil(preorder, &preIndex, preorder[0],
								   INT_MIN, INT_MAX, size);

	cout << "Inorder traversal of the constructed tree: \n";
	printPreorder(root);

	return 0;
}

// This is code is contributed by rathbhupendra
