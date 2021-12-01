#include <iostream>
using namespace std;
#include <queue>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Level order Traversal
// void printLevelOrder(Node* root){
//     // Check root Null or not if null then return
//     if (root == NULL)
//     {
//         return;
//     }
//     // Make a queue that store Node Pointer
//     queue<Node*> q;
//     // afterthat push the root
//     q.push(root);
//     q.push(NULL);

//     // make a loop to check the queue is empty or not
//     while (!q.empty())
//     {
//         Node* node = q.front();
//         q.pop();
//         if (node!=NULL)
//         {
//             cout<<node->data<<" ";
//             if (node->left)
//             {
//                 q.push(node->left);
//             }
//             if (node->right)
//             {
//                 q.push(node->right);
//             }
//         }else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
// }
// Find the sum of nodes at Kth level
//       5
//     /   \
        //    6     3
//  /   \  /  \
        // 9     1 2   1
//      /  \                   let k=3;
//    2      6                 Sum of k nodes = 2+6 = 8
//  /  \      \
        // 3     5     7
// create a function
int sumAtk(Node *root, int k)
{
    // check root null or not
    if (root == NULL)
    {
        return -1;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    // make a loop & check queue is empty or not
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node != NULL)

                {
            // check level ==k
            if (level == k)
            {
                sum += node->data;
            }
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Level Order Traversal
    // printLevelOrder(root);

    // Sum at Kth Level
    cout << sumAtk(root, 2);
}