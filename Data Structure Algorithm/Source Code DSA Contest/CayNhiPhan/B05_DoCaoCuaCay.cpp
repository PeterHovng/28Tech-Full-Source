#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node  *left ,*right;
    Node(int x)
    {
        val = x;
        left = right = NULL;
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
        find(root->right , u , v , c);
        find(root ->left , u , v , c);
    }
}
int hight(Node *root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 0;
    return max(hight(root->left) +1  , hight(root->right) + 1);
}
int main()
{
    int n ; cin >> n;
    Node *root = NULL;
    while(n--)
    {
        int u , v ; char c ; cin >> u >> v >> c;
        if(root == NULL)
        {
            root = new Node(u);
            make(root , u , v , c);
        }
        else
        {
            find(root , u , v , c);
        }
    }
    cout << hight(root);
}
