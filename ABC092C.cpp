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

  LL ans = 0;
  int N;
  cin >> N;
  vector<int> A(N + 2);
  FOR(i, 0, N) { cin >> A[i + 1]; }

  A[0] = 0;
  A[N + 1] = 0;

  LL sum = 0;
  FOR(i, 0, N + 1) { sum += abs(A[i] - A[i + 1]); }
  // cout << sum << '\n';

  int diff, sub;
  FOR(i, 1, N + 1) {
    diff = abs(A[i - 1] - A[i]) + abs(A[i] - A[i + 1]);
    sub = abs(A[i - 1] - A[i + 1]);
    ans = sum - diff + sub;
    cout << ans << '\n';
  }

  return 0;
}