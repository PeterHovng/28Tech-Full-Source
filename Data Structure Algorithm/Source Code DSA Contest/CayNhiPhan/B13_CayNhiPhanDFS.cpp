#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left , *right;
    Node(int x)
    {
        val = x;
        right = left = NULL;
    }
};
void make(Node *root , int u , int v , char c)
{
    if(c == 'L') root->left = new Node(v);
    else root->right = new Node(v);
}
void find(Node *root , int u , int v , char c)
{
    if(root == NULL) return;
    if(root->val == u)
    {
        make(root , u , v , c);
    }
    else
    {
        find(root->left , u , v , c);
        find(root->right , u , v , c);
    }
}
void DFS(Node *root)
{
    if(root == NULL) return;
    cout << root->val << " ";
    DFS(root->right);
    DFS(root->left);
}
int main()
{
    int n ; cin >> n;
    Node *root = NULL;
    for(int i = 0 ; i < n ; i++)
    {
        int u , v ; char c ; cin >> u >> v >> c;
        if(root == NULL)
        {
            root = new Node(u);
            make(root , u , v , c);
        }
        else find(root , u , v , c);
    }
    DFS(root);
    return 0;
}
