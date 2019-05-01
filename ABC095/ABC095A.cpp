#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans = 700;
  string S;
  cin >> S;

  for (int i = 0; i < 3; i++) {
    if (S[i] == 'o') {
      ans += 100;
    }
  }

  cout << ans << '\n';

  return 0;
}