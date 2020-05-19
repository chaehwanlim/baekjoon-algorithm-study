#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, maxOutput = 0;
int arr[100000] = {0, };
int dp[100000] = {0, };

int main() {
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  dp[0] = arr[0];
  maxOutput = dp[0];

  for(int i = 1; i < n; i++) {
    dp[i] = max(dp[i-1] + arr[i], arr[i]);
    maxOutput = max(maxOutput, dp[i]);
  }

  cout << maxOutput;

  return 0;


}