#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string str;
  cin >> str;

  int n = atoi(str.c_str());

  int len = str.size();
  vector<int> nums(len);
  transform(str.begin(), str.end(), nums.begin(),
            [](char ch) { return ch - '0'; });

  int sum = accumulate(nums.begin(), nums.end(), 0);

  if (n % sum) {
    cout << "No" << '\n';
  } else {
    cout << "Yes" << '\n';
  }

  return 0;
}