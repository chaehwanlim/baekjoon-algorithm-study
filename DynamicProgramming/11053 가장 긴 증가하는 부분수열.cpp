#include <iostream>
#include <algorithm>
using namespace std;

int n = 0;
int input[1001];
int dp[1001];

int main() {
  cin >> n;

  for(int i = 1; i <= n; i++) {
    cin >> input[i];
  }

  dp[1] = 1;

  for(int i = 1; i <= n; i++) {
    dp[i] = 1;
    for(int j = 1; j < i; j++) {
      if(input[j] < input[i] && dp[j] + 1 > dp[i])
        dp[i] = dp[j] + 1;
    }

  }

  cout << dp[n];

  return 0;
}