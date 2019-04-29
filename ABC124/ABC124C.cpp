#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string str;
  cin >> str;

  int l = str.length();
  char c[l];
  int S[l];

  for (int i = 0; i < l; i++) {
    c[i] = str[i];
    S[i] = atoi(&c[i]);
  }

  int count = 0;
  for (int i = 2; i < l; i++) {
    if (S[i - 2] == S[i - 1] && S[i - 1] == S[i]) {
      S[i - 1] = 1 - S[i - 1];
      count++;
    }
  }

  /*
  for (int i = 2; i <= l - 1; i++) {
      if (S[i - 1] == S[i]) {
          S[i - 2] = 1 - S[i - 2];
          count++;
          S[i - 1] = 1 - S[i - 1];
          count++;
          i += 2;
      }
  }
  */

  // 1100 or 0011
  for (int i = 3; i < l; i++) {
  }

  cout << count << '\n';

  return 0;
}