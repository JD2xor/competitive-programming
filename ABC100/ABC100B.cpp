#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int D, N;
  cin >> D >> N;

  int result;

  switch (D) {
    case 0:
      result = N;
      if (N == 100) {
        result += 1;
      }
      break;

    case 1:
      result = 100 * N;
      if (N == 100) {
        result += 100;
      }
      break;

    case 2:
      result = 10000 * N;
      if (N == 100) {
        result += 10000;
      }
      break;
  }

  cout << result << "\n";

  return 0;
}