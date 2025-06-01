#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left , *right;
    node(int x)
    {
        val = x;
        left = right = NULL;
    }
};
node* insert(node *root , int x)
{
    if(root == NULL) 
    {
        return new node(x);
    }
    if(x < root->val)
    {
        root->left = insert(root->left , x);
    }
    else root->right = insert(root->right , x);
    return root;
}
void inOrder(node *root)
{
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}
void preOrder(node *root)
{
    if(root == NULL) return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node *root)
{
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
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
    postOrder(root);
    return 0;
}
