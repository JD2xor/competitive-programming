#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  float m;
  cin >> m;
  m = m / 1000.0;

  if (m < 0.1) {
    cout << "00"
         << "\n";
  }
  if (0.1 <= m && m <= 5) {
    if (m < 1) {
      cout << 0;
    }
    cout << (m * 10) << "\n";
  }
  if (6 <= m && m <= 30) {
    cout << (m + 50) << "\n";
  }
  if (35 <= m && m <= 70) {
    cout << ((m - 30) / 5 + 80) << "\n";
  }
  if (70 < m) {
    cout << 89 << "\n";
  }

  return 0;
}