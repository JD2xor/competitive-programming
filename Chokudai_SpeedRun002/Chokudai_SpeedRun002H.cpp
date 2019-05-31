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

  LL ans;
  int N;
  cin >> N;
  LL A, B;
  FOR(i, 0, N) {
    cin >> A >> B;

    ans = max(A, B) - min(A, B);

    if (A == B) {
      ans = -1;
    }

    cout << ans << '\n';
  }

  return 0;
}