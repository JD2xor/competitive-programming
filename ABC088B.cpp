#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> a(N);
    int i;
    for(i = 0; i < N; i++){
        cin >> a[i];
    }

    int A = 0, B = 0;

    for(i = 0; i < N; i++){
        vector<int>::iterator itr = max_element(a.begin(), a.end());
        int max = *itr;
        *itr = 0;
        // int index = distance(a.begin(), itr);

        if(i % 2){
            B += max;
        }
        else{
            A += max;
        }
    }

    cout << (A - B) << '\n';

    return 0;
}