#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left ,*right;
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
        find(root->left , u , v , c);
        find(root->right , u , v , c);
    }
}
void xoanOc(Node *root)
{
    stack<Node*>st1 , st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty())
    {
        while(!st1.empty())
        {
            root = st1.top(); st1.pop();
            cout << root->val << " ";
            if(root->right != NULL) st2.push(root->right);
            if(root->left != NULL) st2.push(root->left);
        }
        while(!st2.empty())
        {
            root = st2.top(); st2.pop();
            cout << root->val << " ";
            if(root->left != NULL) st1.push(root->left);
            if(root->right != NULL) st1.push(root->right);
        }
    }
}
int main()
{
    int n ; cin >> n;
    Node *root = NULL;
    for(int i = 0 ;i < n ;i++)
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
    xoanOc(root);
}
