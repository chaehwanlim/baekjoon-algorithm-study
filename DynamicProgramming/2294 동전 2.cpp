#include <iostream>
using namespace std;

int n, k, result = 0, temp;
int c[100] = {0, };
int dp[100] = {0, };

int main() {
  cin >> n >> k;

  for(int i=1; i<=k; i++) {
    dp[i] = 999;
  }

  for(int i=1; i<=n; i++) {
    cin >> c[i];

    for(int j=c[i]; j<=k; j++) {
      dp[j] = min(dp[j], dp[j-c[i]] + 1);
    }
    
  }

  cout << dp[15];


  return 0;
}