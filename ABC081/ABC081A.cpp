#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string str;
  cin >> str;

  vector<int> nums(3);

  transform(str.begin(), str.end(), nums.begin(),
            [](char ch) { return ch - '0'; });

  int count = 0;
  for (int i = 0; i < 3; i++) {
    if (nums[i] == 1) {
      count++;
    }
  }

  cout << count << '\n';

  return 0;
}