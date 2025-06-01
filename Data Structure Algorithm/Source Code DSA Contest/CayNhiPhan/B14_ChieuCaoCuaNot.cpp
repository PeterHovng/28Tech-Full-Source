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
vector<pair<int,int>>v;
void DFS(Node *root , int h)
{
    if(root == NULL) return;
    v.push_back({root->val , h});
    if(root->left != NULL) DFS(root->left , h + 1);
    if(root->right != NULL) DFS(root->right , h + 1);
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
    DFS(a ,0 );
    sort(v.begin() , v.end(), [](pair<int,int>a , pair<int,int> b)->bool
    {
        return a.first < b.first;
    });
    for(auto x : v)
    {
        cout << x.second << " ";
    }
}
