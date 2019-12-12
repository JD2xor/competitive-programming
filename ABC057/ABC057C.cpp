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

LL digits(LL num) {
  LL count = 0;

  while (num > 0) {
    num /= 10;
    count++;
  }

  return count;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans = 100;
  LL N;
  cin >> N;

  for (LL A = 1; A * A <= N; A++) {
    if (N % A) {
      continue;
    }

    LL B = N / A;
    LL cur = max(digits(A), digits(B));
    ans = min(ans, cur);
  }

  cout << ans << '\n';

  return 0;
}