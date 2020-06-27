#include <iostream>
using namespace std;

#define MOD 1000000;

string str;
int num[5001] = {0, };
int dp[5001] = {0, };
int n;

int main() {
  cin >> str;

  dp[0] = dp[1] = 1;

  for(int i=1; i<=str.length(); i++) {
    num[i] = str[i-1] - '0';

    dp[i] = dp[i-1] % MOD;

    n = num[i-1] * 10 + num[i];

    if(n >= 10 && n <= 26)
      dp[i] = (dp[i] + dp[i-2]) % MOD;
    
  }

  cout << dp[str.length()];

  return 0;
}