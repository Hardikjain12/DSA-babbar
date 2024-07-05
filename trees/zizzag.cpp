#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
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
void print(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
void zizZag(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    bool flag = 1;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> v;
        for (int i = 0; i < size; i++)
        {
            Node *current = q.front();
            v.push_back(current->data);
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
        if (!flag)
        {
            reverse(v.begin(), v.end());
        }
        print(v);
        flag = !flag;
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
    zizZag(root);
    return 0;
}