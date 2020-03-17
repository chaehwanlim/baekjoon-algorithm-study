#include <iostream>
#include <string>
using namespace std;

int n = 0; 

int main() {
  int count = 0;
  int title = 665;
  string result;

  cin >> n;

  while(1) {
    result = to_string(title);

    if(result.find("666") != -1) {  //666의 위치가 존재
      count++;
    }

    if(count == n) {
      cout << result;
      break;
    }

    title++;
  }

  return 0;
}