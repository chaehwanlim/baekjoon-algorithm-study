#include <iostream>
using namespace std;

int n = 0;
int fibo[90];

int main() {
  fibo[0] = 0;
  fibo[1] = 1;

  cin >> n;

  for(int i=2; i <= n; i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }

  cout<< fibo[n];
}