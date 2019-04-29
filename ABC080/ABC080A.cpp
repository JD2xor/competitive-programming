#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int n, a, b;
  cin >> n >> a >> b;

  int temp = n * a;

  if (temp <= b) {
    cout << temp << '\n';
  } else {
    cout << b << '\n';
  }

  return 0;
}