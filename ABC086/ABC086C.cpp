#include <bits/stdc++.h>
using namespace std;

int main(){
    
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    int t[100001], x[100001], y[100001];
    cin >> N;
    t[0] = x[0] = y[0] = 0;
    for(int i = 1; i <= N; ++i){
        cin >> t[i] >> x[i] >> y[i];
    }

    bool flag = true;

    for(int i = 1; i <= N; ++i){
        int dt = t[i] - t[i - 1];
        int dist = abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]);

        if((dt < dist) || (dt % 2 != dist % 2)){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }

    return 0;
}