#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int inputInt = 0, idx = 0;
int input[10];

int main() {
  cin >> inputInt;

  while(1) {
    if(inputInt < 10) {
      input[idx] = inputInt;
      idx++;
      break;
    }
    input[idx] = inputInt % 10;
    inputInt /= 10;
    idx++;
  }

  sort(input, input + idx);

  for(int i=idx-1; i>=0; i--) {
    cout << input[i];
  }

  return 0;
}
