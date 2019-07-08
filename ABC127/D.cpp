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
  int N, M;
  cin >> N >> M;
  vector<LL> A(N);
  FOR(i, 0, N) { cin >> A[i]; }
  vector<pair<LL, int>> ope(M);
  FOR(i, 0, M) { cin >> ope[i].second >> ope[i].first; }

  sort(A.begin(), A.end());
  sort(ope.rbegin(), ope.rend());

  int temp = 0;
  FOR(i, 0, N) {
    if (A[i] < ope[temp].first) {
      A[i] = ope[temp].first;
      ope[temp].second--;

      if (ope[temp].second == 0) {
        temp++;
      }
    }

    ans += A[i];
  }

  // FOR(i, 0, M) { cout << ope[i].second << ' ' << ope[i].first << '\n'; }

  cout << ans << '\n';

  return 0;
}