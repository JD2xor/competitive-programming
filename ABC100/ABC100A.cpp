#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;

  if (A <= 8 && B <= 8) {
    cout << "Yay!\n";
  } else {
    cout << ":(\n";
  }

  return 0;
}