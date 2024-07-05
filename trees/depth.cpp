#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int key;
    // char data;
    Node * left;
    Node * right;
    // vector<Node * > child;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = NULL;
    }
};

// Node* newNode(int item)
// {
//     Node *temp = new Node;
//     temp->value = item;
// }

Node *dummy_tree()
{
    Node * root = new Node(0);
    root -> left = new Node(1);
    root ->right = new Node(2);
    root ->left->left = new Node(3);
    root ->left->right = new Node(4);
    root ->right->left = new Node(5);
    root ->right->right = new Node(6);
    return root;
}
// height of tree
int height(Node * newN)
{
    // if(newN == NULL)
    // {
    //     return 0;
    // }

    if(newN->left==NULL && newN->right == NULL)
    {
        return 1;
    }
    return 1 + max(height(newN->left),height(newN->right));
}

// printing of tree using inorder
void inorder(Node * root)
{
    if(root != NULL)
    {
    inorder(root->left);
    cout << (root->key) << " ";
    inorder(root->right);
    }
}
// printing of tree using preorder
void preorder(Node * root)
{
    if(root != NULL)
    {
    cout << (root->key) << " ";
    preorder(root->left);
    preorder(root->right);
    }
}
// printing of tree using postorder
void postorder(Node * root)
{
    if(root != NULL)
    {
    postorder(root->left);
    postorder(root->right);
    cout << (root->key) << " ";
    }
}

void printCurrentLevel(Node * root, int level)
{
    if(root == NULL) //O(1)
        return;
    if(level == 1) //O(1)
        cout << root->key << "  " ; 
    else if(level > 1)
    {
        printCurrentLevel(root->left , level - 1); // F(n-1)
        printCurrentLevel(root->right , level - 1); // F (n-1)
    }
}
void levelOrder(Node * root)
{
    int h = height(root);
    int i;
    for(i = 1; i <= h; i++)
        printCurrentLevel(root,i);
}

void print(vector<int> vi)
{
    int n = vi.size();
    for (int i = 0; i < n; i++)
    {
        cout << vi[i] << " ";
    }
}

void zizZag(Node *root)
{
    if (root == NULL)
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
        // to store value
        for (int i = 0; i < size; i++)
        {
            Node *current = q.front();
            v.push_back(current->key);
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
        // cout<<endl;
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
    Node *root = dummy_tree();

    // levelOrder(root);
    zizZag(root);

    // cout << "heigh of tree "<< height(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;
    // postorder(root);
    return 0;
}