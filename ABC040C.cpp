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

  int N;
  cin >> N;
  vector<int> a(N);
  FOR(i, 0, N) { cin >> a[i]; }

  vector<LL> cost(N);
  cost[0] = 0;
  cost[1] = abs(a[1] - a[0]);
  FOR(i, 2, N) {
    LL step1 = abs(a[i] - a[i - 1]);
    LL step2 = abs(a[i] - a[i - 2]);
    cost[i] = min(cost[i - 1] + step1, cost[i - 2] + step2);
  }

  // FOR(i, 0, N) { cout << cost[i] << " "; }
  // cout << '\n';

  cout << cost[N - 1] << '\n';

  return 0;
}