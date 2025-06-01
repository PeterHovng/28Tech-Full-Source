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
bool bst(node *root , int x)
{
    if(root == NULL) return false;
    else if(root->val == x) return true;
    else if(root->val > x) return bst(root->left , x);
    else return bst(root->right , x); 
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
    int x ; cin >> x;
    if(bst(root , x)) cout << "YES";
    else cout << "NO";
    return 0;
}
