#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int i;
  int count = 0;

  int N;
  cin >> N;

  int a[N];
  for (i = 0; i < N; i++) {
    cin >> a[i];
  }

  for (i = 0; i < N; i++) {
    while ((a[i] % 2) == 0) {
      a[i] = a[i] / 2;
      count++;
    }
  }

  cout << count << "\n";

  return 0;
}