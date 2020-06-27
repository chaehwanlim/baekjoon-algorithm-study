#include <iostream>
using namespace std;

int n, k, input;
int dp[10001] = {0, };

int main() {
  cin >> n >> k;

  dp[0] = 1;

  for(int i=0; i<n; i++) {
    cin >> input;

    ///1 1 1 1 1 1 1 1 1 1 
    ///1 


    for(int j=input; j<=k; j++) {
      dp[j] += dp[j-input];
    }
  }

  cout << dp[k];

  return 0;
}