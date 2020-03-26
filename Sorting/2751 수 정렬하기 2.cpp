#include <iostream>
#include <algorithm>
using namespace std;

int n = 0;
int numbers[1000000];

int main() {
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> numbers[i];
  }

  sort(numbers, numbers+n);

  for(int i=0; i<n; i++) {
    cout << numbers[i] << '\n';
  }

  return 0;
}