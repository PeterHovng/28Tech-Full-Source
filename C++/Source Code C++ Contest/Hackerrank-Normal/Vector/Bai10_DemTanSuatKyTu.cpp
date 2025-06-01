#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<char> v(n);

  // Nhập các phần tử của mảng v[]
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  // Vector lưu pair<char, int> để lưu ký tự và tần suất
  vector<pair<char, int>> freq_vector;

  // Duyệt qua mảng v[] và cập nhật tần suất
  for (int i = 0; i < n; i++)
  {
    bool found = false;
    for (int j = 0; j < freq_vector.size(); j++)
    {
      // Nếu ký tự đã xuất hiện, tăng tần suất
      if (freq_vector[j].first == v[i])
      {
        freq_vector[j].second++;
        found = true;
        break;
      }
    }
    // Nếu ký tự chưa xuất hiện, thêm vào vector
    if (!found)
    {
      freq_vector.push_back(make_pair(v[i], 1));
    }
  }

  // In ra kết quả
  cout << freq_vector.size() << endl;
  for (pair<char, int> p : freq_vector)
  {
    cout << p.first << " " << p.second << endl;
  }

  return 0;
}
