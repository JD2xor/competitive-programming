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

  int N;
  cin >> N;
  vector<int> A(N);
  FOR(i, 0, N){
    cin >> A[i];
  }

  FOR(i, 0, N){
    int v = A[i];
    int j = i - 1;

    while(j >= 0 && A[j] > v){
      A[j + 1] = A[j];
      j--;
    }

    A[j + 1] = v;

    FOR(i, 0, N - 1){
      cout << A[i] << " ";
    }
    cout << A[N - 1] << '\n'; 
  }

  return 0;
}