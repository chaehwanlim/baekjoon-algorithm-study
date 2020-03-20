#include <iostream>
using namespace std;

int n = 0;
int dp[101];
int input[101];

int main() {
  cin >> n;

  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 1;
  dp[3] = 1;

  for(int i=0; i<n; i++) {
    cin >> input[i];
  }

  for(int i=0; i<n; i++) {
    for(int j=4; j<=input[i]; j++) {
      dp[j] = dp[j-2] + dp[j-3];
    }
    cout << dp[input[i]] << endl;
  }

  return 0;

}