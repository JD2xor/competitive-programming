#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int temp;
    int count = 0;

    for(int i = 0; i <= a; i++){
        temp = 500 * i;

        if(temp == x){
            count++;
            continue;
        }

        for(int j = 0; j <= b; j++){
            temp += 100 * j;

            if(temp == x){
                count++;
                continue;
            }

            for(int k = 0; k <= c; k++){
                temp += 50 * k;

                if(temp == x){
                    count++;
                }

                temp -= 50 * k;
            }

            temp -= 100 * j;
        }
    }

    cout << count << "\n";

    return 0;
}