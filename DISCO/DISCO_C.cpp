#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int mod = 1000000007;

int pow_ten(int x) {
  int temp = 1;

  for (int i = 0; i < 10; ++i) {
    temp = (LL)temp * x % mod;
  }

  return temp;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  int p, q;
  int ans = 0;

  for (int pmax = 1; pmax <= N; ++pmax) {
    p = pow_ten(pmax) - pow_ten(pmax - 1) + mod;
    q = pow_ten(N / pmax);
    ans = (ans + (LL)p * (LL)q) % mod;
  }

  cout << ans << "\n";

  return 0;
}