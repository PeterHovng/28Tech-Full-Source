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
int max(node *root)
{
    if(root->right == NULL) return root->val;
    return max(root ->right);
}
int min(node *root)
{
    if(root->left == NULL) return root->val;
    return min(root->left);
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
    cout << max(root) << " " << min(root);
    return 0;
}
