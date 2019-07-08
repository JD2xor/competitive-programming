#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define debug(x) cout << #x << " : " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans = 0;
  int X;
  cin >> X;

  int root = sqrt(X);

  double temp = 0;
  for (int i = 1; i <= root; i++) {
    for (int j = 2; j < 10; j++) {
      temp = pow(i, j);

      if (temp > X) {
        break;
      }

      ans = max(ans, (int)temp);
    }
  }

  cout << ans << '\n';

  return 0;
}