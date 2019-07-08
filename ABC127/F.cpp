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
  int Q;
  cin >> Q;

  int num;
  vector<LL> a;
  LL b = 0;
  LL atemp, btemp;
  FOR(i, 0, Q) {
    cin >> num;

    if (num == 1) {
      cin >> atemp >> btemp;
      a.push_back(atemp);
      b += btemp;

      sort(a.begin(), a.end());
    } else {
      int size = a.size();
      int half = size / 2;

      atemp = a[(size - 1) / 2];
      btemp = 0;

      FOR(j, 0, half) {
        // debug(a[size - 1 - j]);
        // debug(a[j]);
        btemp += a[size - 1 - j] - a[j];
      }

      btemp += b;
      cout << atemp << ' ' << btemp << '\n';
    }
  }

  return 0;
}