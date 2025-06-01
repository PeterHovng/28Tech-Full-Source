#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n ; cin >> n;
	priority_queue<ll, vector<ll>,greater<ll>>q;
	for(int i= 0 ; i < n;i++)
	{
		int x ; cin >> x;
		q.push(x);
	}
	long long sum = 0;
	while(q.size() > 1)
	{
		ll top = q.top();q.pop();
		ll topp = q.top(); q.pop();
		sum += top + topp;
		q.push(top + topp);
	}
	cout << sum;
}