#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

const int INF = 1e9;
const LL LINF = 1e16;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans = 0;
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> student(N);
  vector<pair<int, int>> check(M);
  FOR(i, 0, N) { cin >> student[i].first >> student[i].second; }
  FOR(i, 0, M) { cin >> check[i].first >> check[i].second; }

  FOR(i, 0, N) {
    LL temp = LINF;
    ans = 1;

    FOR(j, 0, M) {
      LL distance = abs(student[i].first - check[j].first) +
                    abs(student[i].second - check[j].second);

      if (distance < temp) {
        ans = j + 1;
        temp = distance;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}