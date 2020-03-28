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

  int ans = INF;
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  FOR(i, 0, N) { cin >> A[i]; }

  int dest = 0;
  int clockwise = 0;
  int counterclockwise = 0;

  FOR(i, 0, N) {
    // 時計回り
    if (i == 0) {
      clockwise = A[N - 1] - A[0];
    } else {
      dest = i - 1;
      clockwise = K - (A[i] - A[dest]);
    }

    // 反時計回り
    if (i == N - 1) {
      counterclockwise = A[N - 1] - A[0];
    } else {
      dest = i + 1;
      counterclockwise = K - (A[dest] - A[i]);
    }

    int temp = min(clockwise, counterclockwise);
    ans = min(ans, temp);
  }

  cout << ans << '\n';

  return 0;
}