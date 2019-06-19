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

  LL ans = 0;
  LL N;
  cin >> N;

  LL q, r;

  for (LL i = 1; i < N; i++) {
    q = N / i;
    r = N % i;

    if (q == r) {
      ans += i;
    }
  }

  cout << ans << '\n';

  return 0;
}