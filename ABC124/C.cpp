#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cerr << #x << " : " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  LL ans = 0;
  string S;
  cin >> S;

  int len = S.length();

  string bw;
  FOR(i, 0, len) {
    if (i % 2) {
      bw.push_back('1');
    } else {
      bw.push_back('0');
    }
  }

  string wb;
  FOR(i, 0, len) {
    if (i % 2) {
      wb.push_back('0');
    } else {
      wb.push_back('1');
    }
  }

  LL temp = 0;
  FOR(i, 0, len) {
    if (S[i] != bw[i]) {
      temp++;
    }
  }
  FOR(i, 0, len) {
    if (S[i] != wb[i]) {
      ans++;
    }
  }

  ans = min(ans, temp);
  cout << ans << '\n';

  return 0;
}