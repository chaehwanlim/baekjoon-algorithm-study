#include <iostream>
#include <algorithm>
using namespace std;

int n = 0;
int input[301];
int dp[301];

int main() {
  cin >> n;

  for(int i=1; i<=n; i++) {
    cin >> input[i];
  }

  dp[1] = input[1];
  dp[2] = max( input[1]+input[2], input[2]);
  dp[3] = max( input[1]+input[3], input[2]+input[3]);

  for(int i=4; i<=n; i++) {
    dp[i] = max( dp[i-3]+input[i-1]+input[i] , dp[i-2]+input[i] );
  }

  cout<<dp[n];

  return 0;

}