#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define debug(x) cout << #x << " : " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans;
  string S;
  cin >> S;
  LL K;
  cin >> K;

  int i;
  for (i = 0; i < 100; i++) {
    if ((i + 1) == K) {
      break;
    }

    if (S[i] == '1') {
      continue;
    } else {
      break;
    }
  }

  cout << S[i] << '\n';

  return 0;
}

