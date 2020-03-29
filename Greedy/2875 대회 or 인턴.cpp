#include <iostream>
#include <algorithm>
using namespace std;

int n, m, k, counter = 0;

int main() {
  cin >> n >> m >> k;

  while(1) {
    n -= 2;
    m -= 1;
    if( (n+m) >= k )
      counter++;
    else {
      break;
    }
  }

  cout << counter;

  return 0;
}