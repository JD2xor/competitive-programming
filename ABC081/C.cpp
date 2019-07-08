#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cerr << #x << " : " << x << '\n'

const int INF = 1e9;
const int MOD = 1e9 + 7;
const LL LINF = 1e16;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans = 0;
  int N, K;
  cin >> N >> K;
  vector<int> count(N + 1, 0);
  int kind = 0;
  FOR(i, 0, N) {
    int A;
    cin >> A;

    if (count[A] == 0) {
      kind++;
    }
    count[A]++;
  }

  if (kind <= K) {
    cout << ans << '\n';
    return 0;
  }

  sort(count.begin(), count.end());

  FOR(i, 0, N + 1) {
    if (count[i] == 0) {
      continue;
    }

    ans += count[i];
    kind--;

    if (kind <= K) {
      break;
    }
  }

  cout << ans << '\n';

  return 0;
}