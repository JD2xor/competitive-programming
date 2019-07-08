#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string ans = "No";
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (abs(a - c) <= d) {
    ans = "Yes";
  }

  if ((abs(a - b) <= d) && (abs(b - c) <= d)) {
    ans = "Yes";
  }

  cout << ans << '\n';

  return 0;
}