#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, maxOutput = 0;
int input[100000];

int main() {
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> input[i];
  }

  sort(input, input+n, greater<int>());

  for(int i=0; i<n; i++) {
    if(maxOutput < input[i]*(i+1)) {
      maxOutput = input[i]*(i+1);
    }
  }

  cout << maxOutput;

  return 0;
  
}