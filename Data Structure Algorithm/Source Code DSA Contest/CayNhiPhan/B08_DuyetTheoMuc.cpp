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
void BFS(Node *root)
{
    queue<Node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node *f = Q.front(); Q.pop();
        cout << f->val << " ";
        if(f->left != NULL) Q.push(f->left);
        if(f->right != NULL) Q.push(f->right);
    }
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
        else find(root , u , v , c);
    }
    BFS(root);
    return 0;
}
