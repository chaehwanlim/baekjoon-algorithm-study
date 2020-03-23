#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, maximum = 0;
int input[100001];
int dp[100001];

int main() {
  cin >> n;

  for(int i=1; i<=n; i++) {
    cin >> input[i];
  }

  for(int i=1; i<=n; i++) {
    if(input[i] < dp[i-1] + input[i]) {
      dp[i] = dp[i-1] + input[i];
    }
    else {
      dp[i] = input[i];
    }

    if(maximum < dp[i])
      maximum = dp[i];
  }

  cout << maximum;

  return 0;
}