#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string ans;
  int N;
  cin >> N;

  int temp = N;
  int S = 0;
  while (temp > 0) {
    S += temp % 10;
    temp /= 10;
  }

  if (N % S) {
    ans = "No";
  } else {
    ans = "Yes";
  }

  cout << ans << '\n';

  return 0;
}