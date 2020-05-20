#include <iostream>
using namespace std;

int n = 0;
int matrix[1000] = {0, };

int main() {
  cin >> n;

  //1: 1
  //2: 2
  //3: 3
  //4: 5
  //5: 8 13 21 34 55
  //n-2항에 1*2타일 2개 or 2*2타일 1개 붙이기 + n-1항에 2*1타일 1개 붙이기

  matrix[1] = 1;
  matrix[2] = 3;

  for(int i=3; i<=n; i++){
    matrix[i] = (2 * matrix[i-2] + matrix[i-1]) % 10007;
  }

  cout << matrix[n];

  return 0;
}