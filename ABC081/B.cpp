#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int count = 0;
  bool flag = false;
  while (1) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        flag = true;
        break;
      } else {
        a[i] = a[i] / 2;
      }
    }

    if (flag) {
      break;
    }

    count++;
  }

  cout << count << '\n';

  return 0;
}