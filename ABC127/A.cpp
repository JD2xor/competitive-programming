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

  int ans;
  int A, B;
  cin >> A >> B;

  if (A >= 13) {
    ans = B;
  } else if (A >= 6) {
    ans = B / 2;
  } else {
    ans = 0;
  }

  cout << ans << '\n';

  return 0;
}