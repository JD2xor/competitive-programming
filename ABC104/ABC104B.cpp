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

  string ans = "AC";
  string S;
  cin >> S;

  if (S[0] != 'A') {
    ans = "WA";
  }

  int count = SZ(S);
  int pos = 0;
  bool C_appear = false;
  for (int i = 2; i < count - 1; ++i) {
    if (S[i] == 'C') {
      if (C_appear) {
        ans = "WA";
        break;
      } else {
        C_appear = true;
        pos = i;
      }
    }
  }

  if (!C_appear) {
    ans = "WA";
  }

  FOR(i, 1, count) {
    if (i == pos) {
      continue;
    }

    if (isupper(S[i])) {
      ans = "WA";
      break;
    }
  }

  cout << ans << '\n';

  return 0;
}