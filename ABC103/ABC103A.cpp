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

  int ans = 0;
  vector<int> A(3);
  FOR(i, 0, 3) { cin >> A[i]; }

  SORT(A);

  FOR(i, 0, 2) { ans += A[i + 1] - A[i]; }

  cout << ans << '\n';

  return 0;
}