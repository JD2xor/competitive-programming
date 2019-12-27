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
  vector<int> board(N + 1, 0);
  int l, r;
  FOR(i, 0, Q) {
    cin >> l >> r;

    board[l - 1] += 1;
    board[r] -= 1;
  }

  FOR(i, 1, N + 1) { board[i] = board[i] + board[i - 1]; }

  FOR(i, 0, N) {
    if (board[i] % 2) {
      cout << 1;
    } else {
      cout << 0;
    }
  }
  cout << '\n';

  return 0;
}