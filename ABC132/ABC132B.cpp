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

  int ans = 0;
  int n;
  cin >> n;
  vector<int> p(n);
  FOR(i, 0, n) { cin >> p[i]; }
  vector<int> temp(3);

  FOR(i, 1, n - 1) {
    temp[0] = p[i - 1];
    temp[1] = p[i];
    temp[2] = p[i + 1];

    if (temp[0] < temp[1] && temp[1] < temp[2]) {
      ans++;
    } else if (temp[0] > temp[1] && temp[1] > temp[2]) {
      ans++;
    }
  }

  cout << ans << '\n';

  return 0;
}