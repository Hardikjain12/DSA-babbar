#include <bits/stdc++.h>
using namespace std;
class Node
{   public:
    int data;
    Node *left;
    Node *right;
};
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void level(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size=q.size();
        for (int i = 0; i < size; i++)
        {
            Node *current = q.front();
            cout << current->data << " ";
            if (current->left)
            {
                q.push(current->left);
            }
            if (current->right)
            {
                q.push(current->right);
            }
            q.pop();
        }
        cout<<endl;
    }
}

int main()
{
    Node *root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    level(root);
    return 0;
}