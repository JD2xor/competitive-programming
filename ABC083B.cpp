#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    int i, temp, o, p, q, r, s;
    
    for(i = 1; i <= n; i++){
        o = i / 10000;
        p = (i % 10000) / 1000;
        q = (i % 1000) / 100;
        r = (i % 100) / 10;
        s = i % 10;

        temp = o + p + q + r + s;

        if(a <= temp && temp <= b){
            ans += i;
        }
    }

    cout << ans << '\n';

    return 0;
}