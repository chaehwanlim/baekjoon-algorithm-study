#include <iostream>
#include <algorithm>
using namespace std;

int n = 0;
int dp[10001];
int input[10001];

int main() {
  cin >> n;

  for(int i=1; i<=n; i++) {
    cin >> input[i];
  }

  dp[1] = input[1];
  dp[2] = max(input[2] + input[1], input[2]);
  dp[3] = max(input[2] + input[3], input[1] + input[3]);

  for(int i=4; i<=n; i++) {
    dp[i] = max(dp[i-3] + input[i-1] + input[i], dp[i-2] + input[i]);

    //포도주를 두 번 안 먹을 경우(반례)
    dp[i] = max(dp[i-1], dp[i]);
  }

  std::cout << dp[n];

  return 0;
}