#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); --(i))
#define SORT(x) sort(ALL((x)))
#define RSORT(x) sort(RALL((x)))
#define SZ(x) (int)(x).size()
#define debug(x) cerr << #x << " : " << x << '\n'

const int INF = 1e9;
const int MOD = 1e9 + 7;
const LL LINF = 1e18;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans;
  int A, B, K;
  cin >> A >> B >> K;

  if ((B - A + 1) / 2 < K) {
    FOR(i, A, B + 1) { cout << i << '\n'; }
  } else {
    FOR(i, A, A + K) { cout << i << '\n'; }
    FOR(i, B - K + 1, B + 1) { cout << i << '\n'; }
  }

  return 0;
}