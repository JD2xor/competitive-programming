#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  long double time = 18 * 60;
  time = time / (n - 1);

  cout << time << '\n';

  return 0;
}