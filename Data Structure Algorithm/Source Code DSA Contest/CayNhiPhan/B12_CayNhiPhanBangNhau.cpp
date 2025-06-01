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
bool check(Node *a , Node *b)
{
    if(a == NULL && b == NULL) return true;
    if(a != NULL & b != NULL)
    {
        return (a->val == b->val && check(a ->left ,b->left) && check(a->right , b->right));
    }
    return false;
}
int main()
{
    int n ; cin >> n;
    Node *a = NULL;
    for(int i = 0 ;i < n ;i++)
    {
        int u , v ; char c ; cin >> u >> v >> c;
        if(a == NULL)
        {
            a = new Node(u);
            make(a , u , v , c);
        }
        else find(a , u , v , c);
    }
    int m ; cin >> m;
    Node *b = NULL;
    for(int i = 0 ; i < n ;i++)
    {
        int u , v ; char c ; cin >> u >> v >> c;
        if(b == NULL)
        {
            b = new Node(u);
            make(b , u , v , c);
        }
        else find(b , u , v , c);
    }
    if(check(a , b)) cout << "YES";
    else cout << "NO";
}
