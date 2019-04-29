#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int i;
    vector<int> d(N);
    for(i = 0; i < N; i++){
        cin >> d[i];
    }

    int count = 0;
    int max = 200;

    for(i = 0; i < N; i++){
        vector<int>::iterator itr = max_element(d.begin(), d.end());
        int temp = *itr;

        if(temp < max){
            count++;
            max = temp;
        }
        *itr = 0;
    }
    
    cout << count << '\n';

    return 0;
}