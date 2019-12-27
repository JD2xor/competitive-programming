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

  string ans = "NO";
  int H1, H2, W1, W2;
  cin >> H1 >> W1 >> H2 >> W2;

  if (H1 == H2) {
    ans = "YES";
  }
  if (H1 == W2) {
    ans = "YES";
  }
  if (W1 == H2) {
    ans = "YES";
  }
  if (W1 == W2) {
    ans = "YES";
  }

  cout << ans << '\n';

  return 0;
}