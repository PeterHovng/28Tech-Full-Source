#include <iostream>
#include <vector>
#include <iterator>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
  int n;
  cin >> n;
  // khai báo vector pair để lưu trữ 3 biến x , y , z ;
  vector<pair<pair<int, int>, int>> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first.first >> v[i].first.second >> v[i].second;
  }
  int sum;
  // duyệt qua từng phần tử trong vector pair
  for (pair<pair<int, int>, int> it : v)
  {
    // tính tổng 3 phần tử x , y , z ;
    sum = it.first.first + it.first.second + it.second;
    cout << sum << endl;
  }
  return 0;
}