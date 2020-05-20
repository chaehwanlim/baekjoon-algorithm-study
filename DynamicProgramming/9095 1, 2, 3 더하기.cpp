#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, maxInput = 0;
int input[11] = {0, };
int dp[11] = {0, };

int main() {
  cin >> n;

  for(int i=1; i<=n; i++) {
    cin >> input[i];
    maxInput = max(maxInput, input[i]);
  }

  //1:1
  //2:2
  //3:4
  //4=3+1=2+2=1+3: 1+2+4 = 7
  //5=3+2=2+3=1+4: 2+4+7 = 13

  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;

  for(int i=4; i<=maxInput; i++) {
    dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
  }

  for(int i=1; i<=n; i++) {
    cout<< dp[input[i]]<<endl;
  }

  return 0;
}