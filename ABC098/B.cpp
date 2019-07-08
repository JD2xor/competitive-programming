#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define debug(x) cout << #x << " : " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans = -1;
  int N;
  cin >> N;
  string S;
  cin >> S;

  FOR(i, 1, N) {
    int count = 0;
    string L = S.substr(0, i);
    string R = S.substr(i, N - i);

    for (char c = 'a'; c <= 'z'; c++) {
      if ((L.find(c) != -1) && (R.find(c) != -1)) {
        count++;
      }
    }

    ans = max(ans, count);
  }

  cout << ans << '\n';

  return 0;
}