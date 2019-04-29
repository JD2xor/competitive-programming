#include <bits/stdc++.h>
using namespace std;

int main(){
    
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string divide[4] = {"dream", "dreamer", "erase", "eraser"};
    string S;
    cin >> S;

    // 反転
    for(int i = 0; i < 4; i++){
        reverse(divide[i].begin(), divide[i].end());
    }
    reverse(S.begin(), S.end());

    bool flag = true;
    int i = 0;

    while(i < S.size()){
        bool flag2 = false;

        for(int j = 0; j < 4; j++){
            string d = divide[j];
            if(S.substr(i, d.size()) == d){
                flag2 = true;
                i += d.size();
            }
        }

        if(!flag2){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }

    return 0;
}