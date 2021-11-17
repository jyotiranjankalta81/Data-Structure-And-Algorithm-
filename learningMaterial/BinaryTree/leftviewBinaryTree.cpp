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
void leftView(Node* root){
    if (root == NULL)
    {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        // n is the no. of nodes in a current queue
        int n = q.size();

        for (int i = 1; i <=n; i++)
        {
            // create a temporary variable & store the front element
            Node* temp = q.front();
            // remove the top most element 
            q.pop();

            // we know the counter of first element that is left view 
            if (i == 1)
            {
                cout<<temp->data<<" ";
            }

            if (temp->left!=NULL)
            {
                q.push(temp->left);
            }

            if (temp->right !=NULL)
            {
                q.push(temp->right);
            }
            
            
            
        }
        
    }
    
    
}

int main(){



    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->left = new Node(2);
    root->left->right = new Node(4);

    leftView(root);
    cout<<endl;
    return 0;

}