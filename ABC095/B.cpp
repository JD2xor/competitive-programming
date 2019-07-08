#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans = 0;
  int N, X;
  cin >> N >> X;

  int temp = X;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec[i];
    temp -= vec[i];
  }
  ans += N;

  int min = *min_element(vec.begin(), vec.end());
  ans += (temp / min);

  cout << ans << '\n';

  return 0;
}