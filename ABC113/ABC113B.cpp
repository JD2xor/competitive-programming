#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N, T, A;
  cin >> N >> T >> A;
  vector<float> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }

  for (int i = 0; i < N; i++) {
    H[i] = abs(T - H[i] * 0.006 - A);
  }

  vector<float>::iterator minIt = min_element(H.begin(), H.end());
  size_t minIndex = distance(H.begin(), minIt);

  cout << (minIndex + 1) << "\n";

  return 0;
}