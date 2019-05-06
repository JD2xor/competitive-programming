#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define debug(x) cout << #x << " : " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans;
  int D, G;
  cin >> D >> G;
  int p[D], c[D];
  FOR(i, 0, D) { cin >> p[i] >> c[i]; }

  cout << ans << '\n';

  return 0;
}