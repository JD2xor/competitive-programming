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
  int N;
  cin >> N;
  vector<pair<LL, LL>> coin(N);
  LL A, B;
  FOR(i, 0, N) {
    cin >> A >> B;
    coin[i].first = min(A, B);
    coin[i].second = max(A, B);
  }
  ans = N;

  sort(coin.begin(), coin.end());

  FOR(i, 0, N - 1) {
    if (coin[i].first == coin[i + 1].first &&
        coin[i].second == coin[i + 1].second) {
      ans--;
    }
  }

  cout << ans << '\n';

  return 0;
}