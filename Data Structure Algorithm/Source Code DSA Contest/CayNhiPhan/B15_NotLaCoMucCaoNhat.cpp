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
int hight(Node *root)
{
    if(root == NULL) return 0;
    return 1 + max(hight(root->left) , hight(root->right));
}
void BFS(Node *root , int h)
{
    queue<pair<Node* , int>>Q;
    int max = 0;
    Q.push({root , 1});
    while(!Q.empty())
    {
        pair<Node*,int>tmp = Q.front() ; Q.pop();
        Node *ans = tmp.first;
        if(ans->left == NULL && ans->right == NULL && tmp.second == h) ++max;
        if(ans->left != NULL) Q.push({ans->left , tmp.second + 1});
        if(ans->right != NULL) Q.push({ans->right , tmp.second + 1});
    }
    cout << max;
}
int main()
{
    int n ; cin >> n;
    Node *a;
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
    int h = hight(a);
    BFS(a , h);
}
