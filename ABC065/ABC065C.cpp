#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

const int INF = 1e9;
const LL LINF = 1e16;
const int MOD = 1e9 + 7;

LL func(int num) {
  LL result = 1;

  for (int i = 1; i <= num; i++) {
    result = (result * i) % MOD;
  }

  return result;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans;
  int N, M;
  cin >> N >> M;

  int sub = abs(N - M);

  if (sub >= 2) {
    cout << 0 << '\n';
    return 0;
  }

  if (sub) {
    // N と M が違う時
    ans = func(N) * func(M);
    ans = ans % MOD;
  } else {
    // N と M が同じ時
    ans = func(N) * func(M) * 2;
    ans = ans % MOD;
  }

  cout << ans << '\n';

  return 0;
}