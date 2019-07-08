#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  int ans;

  // even
  if ((N % 2) == 0) {
    ans = (N * N - 2 * N) / 2;
    cout << ans << "\n";
  } else {
    ans = (N * N - (N - 1) * 4 + 1) / 2;
    cout << ans << "\n";
  }

  return 0;
}