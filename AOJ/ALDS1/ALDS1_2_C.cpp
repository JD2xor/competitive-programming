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

void BubbleSort(vector<string> &C, int N){
  FOR(i, 0, N){
    RFOR(j, N - 1, i){
      if(C[j][1] < C[j - 1][1]){
        swap(C[j], C[j - 1]);
      }
    }
  }
}

void SelectionSort(vector<string> &C, int N){
  FOR(i, 0, N){
    int minj = i;

    FOR(j, i, N){
      if(C[j][1] < C[minj][1]){
        minj = j;
      }
    }

    swap(C[i], C[minj]);
  }
}

void print(vector<string> C, int N){
  FOR(i, 0, N){
    if(i > 0){
      cout << " ";
    }
    cout << C[i];
  }
  cout << '\n';
}

bool isStable(vector<string> in, vector<string> out, int N){
  FOR(i, 0, N){
    FOR(j, i + 1, N){
      FOR(a, 0, N){
        FOR(b, a + 1, N){
          if(in[i][1] == in[j][1] && in[i] == out[b] && in[j] == out[a]){
            return false;
          }
        }
      }
    }
  }

  return true;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<string> C(N);
  FOR(i, 0, N){
    cin >> C[i];
  }
  vector<string> out(C);

  BubbleSort(C, N);
  SelectionSort(out, N);

  print(C, N);
  cout << "Stable" << '\n';
  print(out, N);
  if(isStable(C, out, N)){
    cout << "Stable" << '\n';
  } else {
    cout << "Not stable" << '\n';
  }

  return 0;
}