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

  string ans = "IMPOSSIBLE";
  int N, M;
  cin >> N >> M;
  vector<vector<int>> liner(N + 1, vector<int>(0));
  FOR(i, 0, M) {
    int a, b;
    cin >> a >> b;
    liner[a].push_back(b);
  }

  int size = liner[1].size();

  FOR(i, 0, size) {
    int index = liner[1][i];
    auto result = find(liner[index].begin(), liner[index].end(), N);
    if (result == liner[index].end()) {
    } else {
      ans = "POSSIBLE";
    }
  }

  cout << ans << '\n';

  return 0;
}