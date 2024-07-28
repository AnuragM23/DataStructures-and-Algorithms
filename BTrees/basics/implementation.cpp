#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter data :" << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter the left element of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the right element of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrderTraversal(node* root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Data after traversal" << endl;
    levelOrderTraversal(root);
    cout << "InOrder Traversal" << endl;
    inOrderTraversal(root);
    cout<<endl;
    cout << "preOrder Traversal" << endl;
    preOrderTraversal(root);
    cout << endl;
    cout << "postOrder Traversal" << endl;
    postOrderTraversal(root);
    cout << endl;
    return 0;
}