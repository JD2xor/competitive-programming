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
  int A, B, C;
  cin >> A >> B >> C;

  int temp = max(max(A, B), C);

  int sub;
  if (temp == A) {
    sub = (A - B) + (A - C);
  }
  if (temp == B) {
    sub = (B - A) + (B - C);
  }
  if (temp == C) {
    sub = (C - A) + (C - B);
  }

  if (sub % 2) {
    ans = sub / 2 + 2;
  } else {
    ans = sub / 2;
  }

  cout << ans << '\n';

  return 0;
}