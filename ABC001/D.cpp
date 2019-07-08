#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(a) begin((a)), end((a))
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); (i)--)
#define debug(x) cout << #x << " : " << x << '\n'

#define MAX 289

const int INF = 1e9;
const int MOD = 1e9 + 7;
const LL LINF = 1e16;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N;
  scanf("%d", &N);
  vector<int> time(MAX, 0);
  int start, end;
  int S, E;
  int Sh, Sm, Eh, Em;

  FOR(i, 0, N) {
    scanf("%d-%d", &S, &E);
    Sh = S / 100;
    Sm = S % 100;
    Eh = E / 100;
    Em = E % 100;

    start = Sh * 60 + Sm;
    start /= 5;

    if (Em % 5) {
      Em += 5 - (Em % 5);
    }
    end = Eh * 60 + Em;
    end /= 5;

    time[start] += 1;
    time[end] -= 1;
  }

  FOR(i, 1, MAX) { time[i] += time[i - 1]; }

  bool flag = false;
  FOR(i, 0, MAX) {
    if (time[i] != 0 && !flag) {
      flag = true;
      start = i / 12 * 100;
      start += i % 12 * 5;
      printf("%04d-", start);
    }
    if (time[i] == 0 && flag) {
      end = i / 12 * 100;
      end += i % 12 * 5;
      printf("%04d\n", end);
      flag = false;
    }
  }

  return 0;
}