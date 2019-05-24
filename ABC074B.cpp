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
  int N, K;
  cin >> N >> K;
  vector<int> x(N);
  FOR(i, 0, N) {
    cin >> x[i];

    int temp = min(x[i], K - x[i]);
    ans += 2 * temp;
  }

  cout << ans << '\n';

  return 0;
}