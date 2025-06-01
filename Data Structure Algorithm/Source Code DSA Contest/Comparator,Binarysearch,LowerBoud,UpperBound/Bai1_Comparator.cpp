#include <bits/stdc++.h>
using namespace std;
int countChan(int n)
{
	int cnt = 0;
	while(n)
	{
		int r = n % 10;
		if(r % 2 == 0) ++cnt;
		n /= 10;
	}
	return cnt;
}
int countLe(int n)
{
	int cnt = 0;
	while(n)
	{
		int r = n % 10;
		if(r % 2 == 1) ++cnt;
		n /= 10;
	}
	return cnt;
}
int main()
{
    int n ; cin >> n;
    vector<int>a(n);
    vector<int> b;
    for(int &x : a)
    {
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end(), [](int x , int y) ->bool
    {
        if(countChan(x) == countChan(y))
        {
        	return x < y ;
		}
        else return countChan(x) < countChan(y);
    });
    for(int x : a) cout << x << " ";
    cout << endl;
    stable_sort(b.begin() , b.end() , [](int x , int y) -> bool
    {
        return countLe(x) < countLe(y);
    });
    for(int x : b) cout << x << " ";
}