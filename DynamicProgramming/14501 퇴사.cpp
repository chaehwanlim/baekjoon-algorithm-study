#include <iostream>
#include <algorithm>
using namespace std;

int n = 0;
int t[16] = {0, };
int p[16] = {0, };
int dp[16] = {0, };

int main() {
  cin >> n;

  for(int i=1; i<=n; i++) {
    cin >> t[i] >> p[i];
  }

  for(int i=n; i>0; i--) {
    if (t[i] > n-i+1) //일을 못하므로 n+1에서의 이익을 더함
      dp[i] = dp[i+1];
    else  //일을 할 수 있으므로 일을 안 할 때의 보수와 일을 할 때의 보수를 비교함
      dp[i] = max(dp[i+1], dp[i+t[i]] + p[i]);

  }

  cout << dp[1];

  return 0;
}