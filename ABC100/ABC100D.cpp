#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int main(){
    
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    LL x[1000], y[1000], z[1000];
    for(int i = 0; i < N; ++i){
        cin >> x[i] >> y[i] >> z[i];
    }

    LL sum[1000];
    vector<LL> vec(8, 0);

    for(int i = 0; i < N; ++i){
        sum[i] = x[i] + y[i] + z[i];
    }
    sort(sum.begin(), sum.end());
        for(int j = 0; j < M; ++j){
            vec[0] += sum[j];
        }

        /*sum[1][i] = x[i] + y[i] - z[i];
        sum[2][i] = x[i] - y[i] + z[i];
        sum[3][i] = x[i] - y[i] - z[i];
        sum[4][i] = - x[i] + y[i] + z[i];
        sum[5][i] = - x[i] + y[i] - z[i];
        sum[6][i] = - x[i] - y[i] + z[i];
        sum[7][i] = - x[i] - y[i] - z[i];*/

    LL max = *max_element(vec.begin(), vec.end());

    cout << max << endl;

    return 0;
}