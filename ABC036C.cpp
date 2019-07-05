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

  int N;
  cin >> N;
  vector<LL> a(N);
  FOR(i, 0, N) { cin >> a[i]; }
  vector<LL> b(N, 0);
  vector<LL*> ptr(N, 0);
  FOR(i, 0, N) { ptr[i] = &b[i]; }

  sort(a.begin(), a.end());

  LL count = 0;
  LL num = a[0];
  FOR(i, 0, N) {
    if (num != a[i]) {
      count++;
    }

    num = a[i];
    a[i] = count;
  }

  FOR(i, 0, N) { cout << *b[i] << '\n'; }

  return 0;
}