#include <iostream>
#include <vector>
using namespace std;

int t, n, temp;
int input[2][100000] = {0, };
int dp[2][100000] = {0, };
vector<int> result;

int main() {
  cin >> t;

  while(t-- > 0) {
    cin >> n;

    for(int i=1; i<=n; i++) {
      scanf("%d", &input[0][i]);
    }

    for(int i=1; i<=n; i++) {
      scanf("%d", &input[1][i]);
    }

    dp[0][0] = dp[1][0] = 0;
    dp[0][1] = input[0][1];
    dp[1][1] = input[1][1];

    for(int i=2; i<=n; i++) {
      dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + input[0][i];
      dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + input[1][i];
    }

    result.push_back(max(dp[0][n], dp[1][n]));

  }

  for(int i=0; i<result.size(); i++) {
    cout << result[i] << endl;
  }

  return 0;
}