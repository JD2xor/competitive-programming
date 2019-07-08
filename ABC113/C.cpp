#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  int P[M], Y[M];
  for (int i = 0; i < M; i++) {
    cin >> P[i] >> Y[i];
  }
  int *p[M];
  for (int i = 0; i < M; i++) {
    p[i] = &Y[i];
  }

  sort(Y, Y + M);

  int count = 1;
  for (int i = 0; i < M; i++) {
    /*
    s1 << setw(6) << setfill('0') << P[i];
    s2 << setw(6) << setfill('0') << *p[i];
    string temp1(s1.str());
    string temp2(s2.str());
    ans = temp1 + temp2;
    cout << ans << "\n";
    */

    printf("%06d", P[i]);
    printf("%06d\n", count);
    count++;
  }

  return 0;
}