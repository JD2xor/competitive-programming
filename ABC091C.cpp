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
  vector<pair<int, int>> r(N);
  FOR(i, 0, N) { cin >> r[i].first >> r[i].second; }
  vector<pair<int, int>> b(N);
  FOR(i, 0, N) { cin >> b[i].first >> b[i].second; }

  sort(r.begin(), r.end(), greater<pair<int, int>>());
  sort(b.begin(), b.end());

  FOR(i, 0, r.size()) {
    if (r[i].first < b[i].first && r[i].second < b[i].second) {
      ans++;
      r.erase(r.begin() + i);
      b.erase(b.begin() + i);
    }
  }

  cout << ans << '\n';

  return 0;
}