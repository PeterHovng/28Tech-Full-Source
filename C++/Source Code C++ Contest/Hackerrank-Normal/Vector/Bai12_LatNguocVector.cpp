#include <iostream>
#include <vector>
using namespace std;

// Hàm nhập dữ liệu vào vector
void nhap(vector<int> &v, int n)
{
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }
}

// Hàm in các phần tử của vector
void in(const vector<int> &v)
{
  for (int x : v)
  {
    cout << x << " ";
  }
  cout << endl;
}

// Hàm lật ngược vector
void rev(vector<int> &v)
{
  int start = 0;
  int end = v.size() - 1;
  while (start < end)
  {
    // Hoán đổi 2 giá trị ở đầu và cuối vector
    swap(v[start], v[end]);
    start++;
    end--;
  }
}

int main()
{
  int n;
  cin >> n; // Nhập số lượng phần tử
  vector<int> v;
  nhap(v, n); // Nhập các giá trị vào vector
  rev(v);     // Lật ngược vector
  in(v);      // In ra vector sau khi lật ngược
}