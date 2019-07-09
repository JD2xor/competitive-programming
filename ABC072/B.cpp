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

  string ans;
  string s;
  cin >> s;

  int size = s.size();

  FOR(i, 0, size) {
    if ((i + 1) % 2) {
      ans += s[i];
    }
  }

  cout << ans << '\n';

  return 0;
}