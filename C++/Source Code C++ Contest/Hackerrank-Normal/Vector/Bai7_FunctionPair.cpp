#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iomanip>
using namespace std;
// công thức tính tạo độ 2 điểm đến gốc toạ độ là tính vector sqrt(x^2 + y^2);
int main()
{
  int n;
  cin >> n;
// lưu trữ kiểu pair vào trong vector
// kiểu pair dùng để lưu trữ theo cặp khi tính toạ độ điểm
  vector<pair<int, int>> v(n); // khai báo kiểu pair trong mảng vector
  // duyệt vector v có kiểu pair
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second;
  }
  double total;
  // duyệt pair
  for (pair<int, int> it : v)
  {
    total = sqrt(pow(it.first, 2) + pow(it.second, 2));
    round(total);
    cout << setprecision(2) << fixed << total << endl;
  }
  return 0;
}