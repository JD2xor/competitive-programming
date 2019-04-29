#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> vec(n + 1, 0);
  for (int i = 0; i < n; i++) {
    vec[a[i]]++;
  }

  // debug
  /*
  for (int i = 0; i <= n; i++) {
    cout << vec[i] << ' ';
  }
  cout << '\n';
  */

  int kind = 0;
  for (int i = 1; i <= n; i++) {
    if (vec[i] > 0) {
      kind++;
    } else {
      vec[i] = 200001;
    }
  }
  vec[0] = 200001;

  int count = 0;
  if (kind <= k) {
    cout << count << '\n';

    return 0;
  }

  for (int i = 0; i < kind - k; i++) {
    std::vector<int>::iterator minIt = std::min_element(vec.begin(), vec.end());
    int minIndex = std::distance(vec.begin(), minIt);
    count += vec[minIndex];
    vec[minIndex] = 200001;
  }

  cout << count << '\n';

  return 0;
}