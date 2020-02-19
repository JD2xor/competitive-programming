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

  bool flag = true;
  int count = 0;

  while(flag){
    flag = false;

    RFOR(j, N - 1, 0){
      if(A[j] < A[j - 1]){
        int temp = A[j - 1];
        A[j - 1] = A[j];
        A[j] = temp;
        flag = true;
        count++;
      }
    }
  }

  FOR(i, 0, N){
    cout << A[i];

    if(i != N - 1){
      cout << " ";
    }
  }
  cout << '\n';
  cout << count << '\n';

  return 0;
}