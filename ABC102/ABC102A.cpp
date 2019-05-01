#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  if (n % 2) {
    cout << (n * 2) << '\n';
  } else {
    cout << n << '\n';
  }

  return 0;
}