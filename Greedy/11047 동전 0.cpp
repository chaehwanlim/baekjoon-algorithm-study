#include <iostream>
#include <ctime>
using namespace std;

int* coins = NULL;
int n = 0, k = 0;

int main() {
  int numCoins = 0;
  clock_t start, end;

  cin >> n >> k;

  coins = new int[n];

  for(int i=0; i<n; i++) {
    cin >> coins[i];
  }

  for(int i=n-1; i>=0; i--) {

    if(k == 0)
      break;

    if(coins[i] <= k) {
      numCoins += k / coins[i];
      k %= coins[i];
    }

  }

  cout << numCoins << endl;

  return 0;
}