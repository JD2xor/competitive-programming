#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

const int INF = 1e9;
const int MOD = 1e9 + 7;
const LL LINF = 1e16;

LL factorial(int num) {
  LL val = 1;

  FOR(i, 1, num + 1) { val = (val * i) % MOD; }

  return val;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans;
  int N, blue;
  cin >> N >> blue;
  int red = N - blue;

  ans = red + 1;
  cout << ans << '\n';

  FOR(i, 2, blue + 1) {
    if (i > red + 1) {
      cout << 0 << '\n';
      continue;
    }

    ans = factorial(red + 1) / factorial(i);
    ans = ans / factorial(red + 1 - i);
    LL temp = factorial(blue - 1) / factorial(i - 1);
    temp = temp / factorial(blue - i - 2);
    ans = (ans * temp) % MOD;

    cout << ans << '\n';
  }

  return 0;
}