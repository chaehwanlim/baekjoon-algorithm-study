#include <iostream>
#include <algorithm>
using namespace std;

int n = 0;
int input[500000] = {0, };
int counter[500000] = {0, };

int main() {
  int sum = 0, maxInput = 0, minInput = 0, most = 0;

  cin >> n;

  cin >> input[0];
  maxInput = minInput = input[0];

  for(int i=1; i<n; i++) {
    cin >> input[i];
    if(maxInput < input[i])
      maxInput = input[i];
    if(minInput > input[i])
      minInput = input[i];
  }

  for(int i=0; i<n; i++) {
    sum += input[i];
  }
  cout << sum / n << '\n';

  sort(input, input+n);
  cout << input[n/2] << '\n';

  for(int i=0; i<n; i++) {
    counter[input[i]]++;
  }
  for(int i=1; i<=maxInput; i++) {
    if(most < counter[i])
      most = counter[i];
  }
  cout << most << '\n';

  cout << maxInput - minInput << '\n';

  return 0;


}