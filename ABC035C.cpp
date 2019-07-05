#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

const int INF = 1e9;
const int MOD = 1e9 + 7;
const LL LINF = 1e16;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N, Q;
  cin >> N >> Q;
  vector<int> board(N, 0);
  int l, r;
  FOR(i, 0, Q) {
    cin >> l >> r;

    int start = l - 1;
    FOR(j, start, r) { board[j]++; }
  }

  FOR(j, 0, N) {
    if (board[j] % 2) {
      cout << 1;
    } else {
      cout << 0;
    }
  }
  cout << '\n';

  return 0;
}