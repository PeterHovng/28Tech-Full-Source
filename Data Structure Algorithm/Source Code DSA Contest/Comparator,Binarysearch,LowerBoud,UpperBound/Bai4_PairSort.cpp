#include <bits/stdc++.h>
using namespace std;
double distance(pair<int,int>a)
{
	return sqrt(pow(a.first , 2) + pow(a.second , 2));
}
int main()
{
	int n ; cin >> n;
	pair<int,int>A[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> A[i].first >> A[i].second;
	}
	sort(A , A + n , [](pair<int,int>a , pair<int,int>b) ->bool
	{
		if(distance(a) == distance(b))
		{
			if(a.first == b.first) return a.second < b.second;
			else return a.first < b.first;
		}
		else return distance(a) < distance(b);
	});
	for(pair<int,int> x : A)
	{
		cout << x.first << " " << x.second << endl;
	}
}