#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N, Y;
    cin >> N >> Y;

    int x, y, z, temp;
    x = y = z = temp = 0;
    bool flag = false;

    for(int i = 0; i <= N; i++){
        if(flag){
            break;
        }

        temp = 10000 * i;

        if(i == N && temp == Y){
            x = i;
            flag = true;
            break;
        }

        for(int j = 0; j <= N - i; j++){
            if(flag){
                break;
            }

            temp += 5000 * j;

            if(i + j == N && temp == Y){
                x = i;
                y = j;
                flag = true;
                break;
            }

            for(int k = 0; k <= N - i - j; k++){
                temp += 1000 * k;

                if(i + j + k == N && temp == Y){
                    x = i;
                    y = j;
                    z = k;
                    flag = true;
                    break;
                }

                temp -= 1000 * k;
            }

            temp -= 5000 * j;
        }
    }

    if(!flag){
        x = y = z = -1;
    }

    printf("%d %d %d\n", x, y, z);

    return 0;
}