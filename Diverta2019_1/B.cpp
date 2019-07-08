#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

const int INF = 1e9;

int main() {
  int ans = 0;
  int R, G, B, N;
  cin >> R >> G >> B >> N;

  FOR(i, 0, N + 1) {
    FOR(j, 0, N + 1) {
      int temp = N - (R * i + G * j);

      if (temp < 0) {
        continue;
      }

      if ((temp % B) == 0) {
        ans++;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}