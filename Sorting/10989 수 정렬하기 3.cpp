#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, idx = 0, maxIdx = 0;
int counter[10000001] = {0,};
int counterSum[10000001] = {0,};
int input[10000001] = {0,};
int result[10000001] = {0,};

int main() {
  cin >> n;

  for(int i=1; i<=n; i++) {
    cin >> input[i];
    if(input[i] > maxIdx) {
      maxIdx = input[i];
    }
  }

  for(int i=1; i<=n; i++) {
    counter[input[i]]++;
  }

  counterSum[1] = counter[1];

  for(int i=1; i<=maxIdx; i++) {
    counterSum[i] = counterSum[i-1] + counter[i];
  }

  for(int i=n; i>=1; i--) {
    result[counterSum[input[i]]] = input[i];
    counterSum[input[i]]--;
  } 

  for(int i=1; i<=n; i++) {
    cout << result[i] << '\n';
  }

  return 0;
}