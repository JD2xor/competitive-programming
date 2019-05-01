#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define debug(x) cout << #x << " : " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans = 0;
  int N;
  cin >> N;
  int a;
  FOR(i, 0, N) {
    cin >> a;
    ans += a - 1;
  }

  cout << ans << '\n';

  return 0;
}