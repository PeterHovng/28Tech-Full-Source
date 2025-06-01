#include <bits/stdc++.h>
using namespace std;
int n , k , s , cnt = 0;
void BackTrack(int sum , int pos , int count)
{
	if(count == k && sum == s) ++cnt;
	for(int i = pos ; i <= n ;i++)
	{
		if(sum + i <= s)
		{
			BackTrack(sum + i , i + 1 , count + 1);
		}
	}	
}
int main()
{
	cin >> n >> k >> s;
	BackTrack(0 , 1 , 0);
	cout << cnt;
}