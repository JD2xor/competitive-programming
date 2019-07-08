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
  int N, D;
  cin >> N >> D;
  vector<vector<double>> coordinate(N, vector<double>(D));
  FOR(i, 0, N) {
    FOR(k, 0, D) { cin >> coordinate[i][k]; }
  }

  FOR(i, 0, N) {
    FOR(j, i + 1, N) {
      double sum = 0.0;
      double temp = 0.0;

      FOR(k, 0, D) {
        temp = abs(coordinate[i][k] - coordinate[j][k]);
        sum += temp * temp;
      }

      double root = sqrt(sum);
      if (ceil(root) == floor(root)) {
        ans++;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}