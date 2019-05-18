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

  int ans;
  int N;
  cin >> N;
  vector<int> X(N);
  FOR(i, 0, N) { cin >> X[i]; }
  vector<int> T = X;

  sort(X.begin(), X.end());
  int temp = X[N / 2];

  FOR(i, 0, N) {
    if (T[i] >= temp) {
      ans = X[N / 2 - 1];
    } else {
      ans = temp;
    }

    cout << ans << '\n';
  }

  return 0;
}