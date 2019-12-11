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

  LL ans;
  int N;
  cin >> N;

  LL L[100] = {};
  L[0] = 2;
  L[1] = 1;

  FOR(i, 2, N + 1) { L[i] = L[i - 1] + L[i - 2]; }

  cout << L[N] << '\n';

  return 0;
}