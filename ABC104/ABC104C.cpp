#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans = 1e9;
  int D, G;
  cin >> D >> G;
  int p[D], c[D];
  FOR(i, 0, D) { cin >> p[i] >> c[i]; }

  FOR(bit, 0, (1 << D)) {
    int sum = 0;
    int count = 0;

    FOR(i, 0, D) {
      if (bit & (1 << i)) {
        sum += 100 * (i + 1) * p[i] + c[i];
        count += p[i];
      }
    }

    if (sum >= G) {
      ans = min(ans, count);
    } else {
      RFOR(i, D - 1, -1) {
        if (bit & (1 << i)) {
          continue;
        }

        FOR(j, 0, p[i]) {
          if (sum >= G) {
            break;
          }

          sum += 100 * (i + 1);
          count++;
        }
      }

      ans = min(ans, count);
    }
  }

  cout << ans << '\n';

  return 0;
}