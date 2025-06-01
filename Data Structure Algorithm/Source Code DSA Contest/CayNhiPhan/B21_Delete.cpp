#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left , *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
node* insert(node *root , int x)
{
    if(root == NULL) return new node(x);
    if(x > root->data) root->right = insert(root->right , x);
    else root->left = insert(root->left , x);
    return root;
}
node *search(node *root)
{
    node *tmp = root;
    while(tmp && tmp->left != NULL)
    {
        tmp = tmp->left;
    }
    return tmp;
}
node *deletenode(node *root , int x)
{
    if(root == NULL) return root;
    if(x < root->data) root->left = deletenode(root->left , x);
    else if(x > root->data) root->right = deletenode(root->right , x);
    else
    {
        if(root->left == NULL && root->right == NULL) return NULL;
        
        else if(root->left == NULL)
        {
            node *tmp = root->right;
            delete root;
            return tmp;
        }
        else if(root->right == NULL)
        {
            node *tmp = root->left;
            delete root;
            return tmp;
        }
        node *tmp = search(root->right);
        root->data = tmp->data;
        root->right = deletenode(root->right , root->data);
    }
    return root;
}
void inOrder(node *root)
{
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{
    int n ; cin >> n;
    node *root = NULL;
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >>x;
        root = insert(root , x);
    }
    int y ; cin >>y;
    root = deletenode(root , y);
    inOrder(root);
}
