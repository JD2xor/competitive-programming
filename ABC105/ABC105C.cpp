#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define debug(x) cout << #x << " : " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string ans;
  int N;
  cin >> N;

  if (!N) {
    ans = "0";
  }

  int temp;
  while (N) {
    if (N % 2 == -1) {
      ans.push_back('1');
      N -= 1;
    } else {
      char c = '0' + N % (-2);
      ans.push_back(c);
    }

    N = N / (-2);
  }

  reverse(ALL(ans));

  cout << ans << '\n';

  return 0;
}