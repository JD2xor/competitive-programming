#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int ans;
  vector<int> vec(3);
  int K;
  for (int i = 0; i < 3; i++) {
    cin >> vec[i];
  }
  cin >> K;

  decltype(vec)::iterator itr = max_element(vec.begin(), vec.end());
  int maxIndex = distance(vec.begin(), itr);

  for (int i = 0; i < K; i++) {
    vec[maxIndex] *= 2;
  }

  ans = accumulate(vec.begin(), vec.end(), 0);

  cout << ans << '\n';

  return 0;
}