#include <iostream>
#include <algorithm>
using namespace std;

int output = 0;
int coins[6] = {500, 100, 50, 10, 5, 1};

int main() {
  int n;
  cin >> n;
  n = 1000 - n;

  for(int i=0; i<n; i++) {
    if(coins[i] > n) {
      continue;
    }
    output += (n / coins[i]);
    n %= coins[i];
  }

  cout << output;

  return 0;

}