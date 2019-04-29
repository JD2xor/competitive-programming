#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  int count = 0;

  if (s[0] == '1') {
    count++;
  }
  if (s[1] == '1') {
    count++;
  }
  if (s[2] == '1') {
    count++;
  }

  cout << count << "\n";

  return 0;
}