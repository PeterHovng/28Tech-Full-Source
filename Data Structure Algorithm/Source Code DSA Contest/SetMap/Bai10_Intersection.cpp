#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m;
    set<int>se; int a[n];
    for(int i = 0 ; i < n ;i++)
    {
    	cin >> a[i];
	}
	for(int i = 0 ; i< m ;i++)
	{
		int x ; cin >> x;
		se.insert(x);
	}
	for(int x : a)
	{
		if(se.count(x))
		{
			cout << x << " ";
			se.erase(x);
		}
	}
}