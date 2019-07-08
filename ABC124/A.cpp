#include <bits/stdc++.h>
using namespace std;

using LL = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;

  int coin = 0;
  if (A >= B) {
    coin += A;
    A = A - 1;
  } else {
    coin += B;
    B = B - 1;
  }

  if (A >= B) {
    coin += A;
  } else {
    coin += B;
  }

  cout << coin << '\n';

  return 0;
}