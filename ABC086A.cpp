#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int c;
  c = a * b;

  string s;

  // 偶数
  if (c % 2 == 0) {
    s = "Even";
  } else {
    s = "Odd";
  }

  cout << s << "\n";

  return 0;
}