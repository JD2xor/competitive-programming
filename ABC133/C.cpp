#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cerr << #x << " : " << x << '\n'

const int INF = 1e9;
const int MOD = 1e9 + 7;
const LL LINF = 1e16;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans = 2019;
  LL L, R;
  cin >> L >> R;

  LL range = R - L + 1;
  if (range > 2019) {
    range = 2019;
  }

  FOR(i, 0, range) {
    FOR(j, i + 1, range) {
      LL modulo = (L + i) * (L + j) % 2019;
      ans = min(ans, modulo);
    }
  }

  cout << ans << '\n';

  return 0;
}