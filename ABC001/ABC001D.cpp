#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<pair<int, int>> time(N);  // <S, E>
  int Sh, Sm, Eh, Em;
  for (int i = 0; i < N; i++) {
    scanf("%2d%2d-%2d%2d", &Sh, &Sm, &Eh, &Em);
    Sm += Sh * 12;
    Em += Eh * 12;
    time[i].first = Sh * 60 + Sm;
    time[i].second = Eh * 60 + Em;
  }

  return 0;
}