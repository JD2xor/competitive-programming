#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

const int INF = 1e9;
const LL LINF = 1e16;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string ans;
  string O, E;
  cin >> O >> E;

  int size = O.size() + E.size();

  FOR(i, 0, size) {
    if (i % 2) {
      int index = i / 2;
      ans.push_back(E[index]);
    } else {
      int index = i / 2;
      ans.push_back(O[index]);
    }
  }

  cout << ans << '\n';

  return 0;
}