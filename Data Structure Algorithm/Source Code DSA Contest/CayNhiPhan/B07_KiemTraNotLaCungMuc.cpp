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
int hight(Node *root)
{
    if(root == NULL) return 0;
    else if(root->right == NULL && root->right == NULL) return 0;
    else return max(hight(root->left) + 1 , hight(root->right) + 1);
}
bool check(Node *root , int h , int &maxh)
{
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL)
    {
        if(maxh == 0)
        {
            maxh = h;
            return true;
        }
        else
        {
            return maxh == h;
        }
    }
    else return check(root->left , h + 1 , maxh) && check(root->right , h + 1 , maxh);
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
    int maxh = 0;
    if(check(root , 0 , maxh)) cout << "YES";
    else cout << "NO";
    return 0;
}
