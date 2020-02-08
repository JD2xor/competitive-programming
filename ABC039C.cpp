#include <bits/stdc++.h>
using namespace std;

using LL = long long;

#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b) for (int(i) = (a); (i) > (b); --(i))
#define SORT(x) sort(ALL((x)))
#define RSORT(x) sort(RALL((x)))
#define SZ(x) (int)(x).size()
#define debug(x) cerr << #x << " : " << x << '\n'

const int INF = 1e9;
const int MOD = 1e9 + 7;
const LL LINF = 1e18;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string ans;
  string S;
  cin >> S;

  string sub = S.substr(0, 12);

  if (sub == "WBWBWWBWBWBW") {
    ans = "Do";
  } else if (sub == "WBWWBWBWBWWB") {
    ans = "Re";
  } else if (sub == "WWBWBWBWWBWB") {
    ans = "Mi";
  } else if (sub == "WBWBWBWWBWBW") {
    ans = "Fa";
  } else if (sub == "WBWBWWBWBWWB") {
    ans = "So";
  } else if (sub == "WBWWBWBWWBWB") {
    ans = "La";
  } else {
    ans = "Si";
  }

  cout << ans << '\n';

  return 0;
}