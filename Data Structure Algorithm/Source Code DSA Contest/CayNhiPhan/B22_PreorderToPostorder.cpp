#include <bits/stdc++.h>
using namespace std;
int ok ;
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
node *searchMin(node *root)
{
    node *tmp = root;
    while(tmp && tmp->left != NULL)
    {
        tmp = tmp->left;
    }
    return tmp;
}
node *searchMax(node *root)
{
    node *tmp = root;
    while(tmp && tmp->right != NULL)
    {
        tmp = tmp->right;
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
        if(root->left == NULL && root->right == NULL) 
        {
            delete root;
            return NULL;
        } 
        else if(root->left != NULL)
        {
            node *tmp = searchMax(root->left);
            root->data = tmp->data;
            root->left = deletenode(root->left , tmp->data);
        }
        else
        {
            node *tmp = searchMin(root->right);
            root->data = tmp->data;
            root->right = deletenode(root->right , tmp->data);
        }
    }
    return root;
}
void truyvan(node *root , int x)
{
    if(root == NULL) return;
    if(x == root->data)
    {
        ok = 1;
        cout << root->data << " ";
        return;
    }
    else if(x < root->data) truyvan(root->left , x);
    else if(x > root->data) truyvan(root->right , x);
    if(ok) cout << root->data << " ";
}
void pos(node *root)
{
    if(root == NULL) return;
    pos(root->left);
    pos(root->right);
    cout << root->data << " ";
}
int main()
{
    int n ; cin >> n;
    node *root = NULL;
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >> x;
        root = insert(root , x);
    }
    pos(root);
}
