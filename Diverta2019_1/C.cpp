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

  int ans = 0;
  int N;
  cin >> N;

  vector<string> s(N);
  FOR(i, 0, N) { cin >> s[i]; }

  int countA = 0;
  int countB = 0;
  int countBA = 0;
  FOR(i, 0, N) {
    int size = s[i].size();

    if (s[i][0] != 'B' && s[i][size - 1] == 'A') {
      countA++;
    }
    if (s[i][0] == 'B' && s[i][size - 1] != 'A') {
      countB++;
    }
    if (s[i][0] == 'B' && s[i][size - 1] == 'A') {
      countBA++;
    }
  }

  if (countBA) {
    if (countB + countA) {
      ans = countBA + min(countA, countB);
    } else {
      ans = countBA - 1;
    }
  } else {
    ans = min(countA, countB);
  }

  regex pattern("AB");
  smatch match;

  FOR(i, 0, N) {
    while (regex_search(s[i], match, pattern)) {
      ans++;
      s[i] = match.suffix();
    }
  }

  cout << ans << '\n';

  return 0;
}