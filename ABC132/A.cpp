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

  string ans = "No";
  string S;
  cin >> S;

  if (S[0] == S[1]) {
    if (S[2] == S[3] && S[0] != S[2] && S[1] != S[3]) {
      ans = "Yes";
    }
  }
  if (S[0] == S[2]) {
    if (S[1] == S[3] && S[0] != S[1] && S[2] != S[3]) {
      ans = "Yes";
    }
  }
  if (S[0] == S[3]) {
    if (S[1] == S[2] && S[0] != S[1] && S[2] != S[3]) {
      ans = "Yes";
    }
  }

  cout << ans << '\n';

  return 0;
}