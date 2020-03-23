#include <iostream>
#include <algorithm>
using namespace std;

#define mod 1000000000
int n = 0, sum = 0;
int dp[101][11];
//dp[N][M]에서 N은 길이, M은 마지막 숫자


int main() {
  cin >> n;

  for(int i=1; i<=9; i++) {
    dp[1][i] = 1; //한자리수에선 계단수가 1~9까지 모두 1이다.
  }

  for(int i=2; i<=9; i++) {   
    for(int j=0; j<=9; j++) {
      if(j == 0)
        dp[i][j] = dp[i-1][j+1];//...10만 가능
      else if(j == 9)
        dp[i][j] = dp[i-1][j-1];//...89만 가능
      else
        dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % mod;//34, 54 가능
    }
  }

  for(int i=0; i<=9; i++) {
    sum += dp[n][i];
  }

  cout << sum % mod;

  return 0;

}