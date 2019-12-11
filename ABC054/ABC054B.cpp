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

  int N, M;
  cin >> N >> M;
  vector<string> A(N), B(M);
  string temp;
  FOR(i, 0, N) { cin >> A[i]; }
  FOR(i, 0, M) { cin >> B[i]; }

  int sub = N - M;
  bool flag;

  FOR(i, 0, sub + 1) {
    FOR(j, 0, sub + 1) {
      flag = true;

      FOR(ii, 0, M) {
        FOR(jj, 0, M) {
          if (A[i + ii][j + jj] != B[ii][jj]) {
            flag = false;
          }
        }
      }

      if (flag) {
        cout << "Yes" << '\n';
        return 0;
      }
    }
  }

  cout << "No" << '\n';
  return 0;
}