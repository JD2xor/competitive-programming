#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans;
  int a, b;
  cin >> a >> b;

  int sub = b - a;
  int temp = 0;
  for (int i = 1; i < sub; i++) {
    temp += i;
  }

  ans = temp - a;
  cout << ans << '\n';

  return 0;
}