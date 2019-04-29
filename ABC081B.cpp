#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N, A[200];
  cin >> N;

  int i;

  for (i = 0; i < N; i++) {
    cin >> A[i];
  }

  int count = 0;
  int flag = 0;

  while (1) {
    // 探索
    for (i = 0; i < N; i++) {
      if (A[i] % 2 == 1) {
        flag = 1;
      }
    }

    if (flag == 1) {
      break;
    } else {
      for (i = 0; i < N; i++) {
        A[i] = A[i] / 2;
      }
      count++;
    }
  }

  cout << count << "\n";

  return 0;
}