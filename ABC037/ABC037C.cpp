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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans = 0;
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  FOR(i, 0, N) { cin >> a[i]; }

  int partial = N - K + 1;
  LL temp;

  FOR(i, 0, partial) {
    temp = 0;

    FOR(j, 0, K) { temp += a[i + j]; }

    ans += temp;
  }

  cout << ans << '\n';

  return 0;
}