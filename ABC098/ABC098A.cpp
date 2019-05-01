#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;

  vector<int> vec;
  vec.push_back(A + B);
  vec.push_back(A - B);
  vec.push_back(A * B);

  int ans = *max_element(vec.begin(), vec.end());

  cout << ans << '\n';

  return 0;
}