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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans = 0;
  int N;
  cin >> N;
  vector<int> count(100001, 0);
  FOR(i, 0, N) {
    int a;
    cin >> a;
    count[a]++;
  }

  LL temp;
  FOR(i, 0, 99999) {
    temp = count[i] + count[i + 1] + count[i + 2];
    ans = max(ans, temp);
  }

  cout << ans << '\n';

  return 0;
}