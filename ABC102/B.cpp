#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans;
  int N;
  cin >> N;

  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec[i];
  }

  int temp;
  ans = *max_element(vec.begin(), vec.end());
  temp = *min_element(vec.begin(), vec.end());
  ans = abs(ans - temp);

  cout << ans << '\n';

  return 0;
}