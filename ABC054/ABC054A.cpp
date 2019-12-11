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

  string ans;
  int A, B;
  cin >> A >> B;

  if (A == B) {
    ans = "Draw";
  } else if (A > B) {
    if (B == 1) {
      ans = "Bob";
    } else {
      ans = "Alice";
    }
  } else {
    if (A == 1) {
      ans = "Alice";
    } else {
      ans = "Bob";
    }
  }

  cout << ans << '\n';

  return 0;
}