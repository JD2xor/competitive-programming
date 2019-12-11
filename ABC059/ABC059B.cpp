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
  string A, B;
  cin >> A >> B;

  if (A.size() > B.size()) {
    ans = "GREATER";
  } else if (A.size() < B.size()) {
    ans = "LESS";
  } else {
    int size = A.size();
    int i;

    for (i = 0; i < size; i++) {
      if (A[i] > B[i]) {
        ans = "GREATER";
        break;
      } else if (A[i] < B[i]) {
        ans = "LESS";
        break;
      }
    }

    if (i == size) {
      ans = "EQUAL";
    }
  }

  cout << ans << '\n';

  return 0;
}