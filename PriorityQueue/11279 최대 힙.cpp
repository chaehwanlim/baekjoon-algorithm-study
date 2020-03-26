#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n = 0, temp = 0, zero = 0;
priority_queue<int> input;

int main() {
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> temp;
    if(temp == 0) {
      if(input.empty()) {
        cout << "0" << endl;

      } else {
        cout << input.top() << endl;
        input.pop();
      }
    }
    else {
      input.push(temp);
    }
  }

  return 0;

}
