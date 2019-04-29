#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int A, B, K;
  cin >> A >> B >> K;

  while (1) {
    if ((A % 2) != 0) {
      --A;
    }
    B += A / 2;
    A = A / 2;

    --K;
    if (K == 0) break;

    if ((B % 2) != 0) {
      --B;
    }
    A += B / 2;
    B = B / 2;

    --K;
    if (K == 0) break;
  }

  cout << A << " " << B << "\n";

  return 0;
}