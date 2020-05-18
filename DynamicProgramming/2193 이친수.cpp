#include <iostream>
using namespace std;

int matrix[90] = {0, };
int n = 0;

int main() {
  cin >> n;

  //1
  //10
  //100,101
  //1000,1001,1010
  //10000,10001,10010,10100,10101
  //10으로 시작하고 n-2번째 항들을 붙인 것들과 n-1번째의 첫째자리를뺀 나머지를 붙인 것들의 합

  matrix[0] = 1;
  matrix[1] = 1;

  for(int i=2; i<n; i++) {
    matrix[i] = matrix[i-1] + matrix[i-2];
  }

  cout << matrix[n-1];

  return 0;
}