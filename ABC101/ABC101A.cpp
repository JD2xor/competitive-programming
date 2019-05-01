#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string str;
  cin >> str;

  int ans = 0;

  for (int i = 0; i < 4; i++) {
    if (str[i] == '+') {
      ans++;
    } else {
      ans--;
    }
  }

  cout << ans << '\n';

  return 0;
}