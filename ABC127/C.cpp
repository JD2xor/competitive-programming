#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

const int INF = 1e9;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans = 0;
  int N, M;
  cin >> N >> M;
  int L, R, Lmax = 0, Rmin = INF;
  FOR(i, 0, M) {
    cin >> L >> R;
    Lmax = max(Lmax, L);
    Rmin = min(Rmin, R);
  }

  ans = Rmin - Lmax + 1;
  if (ans < 0) {
    ans = 0;
  }

  cout << ans << '\n';

  return 0;
}