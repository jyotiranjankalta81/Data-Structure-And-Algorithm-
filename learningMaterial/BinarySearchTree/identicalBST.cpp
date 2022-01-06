// Problem
// For given root nodes of 2 binary search trees, print if the bsta are identical or not.
// identical BSTs are structurally identical and have equal values for the nodes in the structure

// To identify if two trees are identical, we need to traverse both trees simultaneously, and while traversing we need to compare data and children of the trees.

// Below is the step by step algorithm to check if two BSTs are identical:

// If both trees are empty then return 1.
// Else If both trees are non -empty
// Check data of the root nodes (tree1->data == tree2->data)
// Check left subtrees recursively i.e., call sameTree(tree1->left_subtree, tree2->left_subtree)
// Check right subtrees recursively i.e., call sameTree(tree1->right_subtree, tree2->right_subtree)
// If the values returned in the above three steps are true then return 1.
// Else return 0 (one is empty and other is not).

// C++ program to check if two BSTs
// are identical

#include <iostream>
using namespace std;

// BST node
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

// Utility function to create a new Node
struct Node *newNode(int data)
{
	struct Node *node = (struct Node *)
		malloc(sizeof(struct Node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

// Function to perform inorder traversal
void inorder(Node *root)
{
	if (root == NULL)
		return;

	inorder(root->left);

	cout << root->data << " ";

	inorder(root->right);
}

// Function to check if two BSTs
// are identical
int isIdentical(Node *root1, Node *root2)
{
	// Check if both the trees are empty
	if (root1 == NULL && root2 == NULL)
		return 1;
	// If any one of the tree is non-empty
	// and other is empty, return false
	else if (root1 != NULL && root2 == NULL)
		return 0;
	else if (root1 == NULL && root2 != NULL)
		return 0;
	else
	{ // Check if current data of both trees equal
		// and recursively check for left and right subtrees
		if (root1->data == root2->data && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right))
			return 1;
		else
			return 0;
	}
}

// Driver code
int main()
{
	struct Node *root1 = newNode(5);
	struct Node *root2 = newNode(5);
	root1->left = newNode(3);
	root1->right = newNode(8);
	root1->left->left = newNode(2);
	root1->left->right = newNode(4);

	root2->left = newNode(3);
	root2->right = newNode(8);
	root2->left->left = newNode(2);
	root2->left->right = newNode(4);

	if (isIdentical(root1, root2))
		cout << "Both BSTs are identical";
	else
		cout << "BSTs are not identical";

	return 0;
}
