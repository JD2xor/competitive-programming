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

  LL ans;
  string S;
  cin >> S;

  int size = S.size();

  while (size > 2) {
    S.pop_back();
    size = S.size();

    if (size % 2) {
      continue;
    }

    int half = size / 2;
    string s1 = S.substr(0, half);
    string s2 = S.substr(half, half);

    if (s1 == s2) {
      ans = size;
      break;
    }
  }

  cout << ans << '\n';

  return 0;
}