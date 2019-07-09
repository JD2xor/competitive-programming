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

LL gcd(LL a, LL b) {
  if (b == 0) {
    return a;
  }

  return gcd(b, (a % b));
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans;
  int N;
  cin >> N;
  FOR(i, 0, N) {
    LL A, B;
    cin >> A >> B;

    if (A < B) {
      LL temp = A;
      A = B;
      B = temp;
    }

    ans = gcd(A, B);
    cout << ans << '\n';
  }

  return 0;
}