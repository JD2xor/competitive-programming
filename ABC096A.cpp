#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans;
  int a, b;
  cin >> a >> b;

  ans = a - 1;
  if (b >= a) {
    ans++;
  }

  cout << ans << '\n';

  return 0;
}