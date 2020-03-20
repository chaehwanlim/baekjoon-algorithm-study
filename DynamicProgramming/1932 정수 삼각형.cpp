#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, idx = 1, maximum = 0;
int dp[501][501];

int main() {
  cin >> n;

  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cin >> dp[i][j];
    } 
  }

  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      if(j == 1)
        dp[i][j] += dp[i-1][j];
      else if (j == i)
        dp[i][j] += dp[i-1][j-1];
      else
        dp[i][j] += max(dp[i-1][j-1], dp[i-1][j]);
    }
  }

  for(int i=1; i<=n; i++) {
    if(maximum < dp[n][i])
      maximum = dp[n][i];
  }

  cout<<maximum;

  return 0;
}
