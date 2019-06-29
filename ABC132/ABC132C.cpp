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

  LL ans;
  int N;
  cin >> N;
  vector<int> d(N);
  FOR(i, 0, N) { cin >> d[i]; }

  sort(d.begin(), d.end());

  int half = N / 2;
  ans = d[half] - d[half - 1];

  cout << ans << '\n';

  return 0;
}