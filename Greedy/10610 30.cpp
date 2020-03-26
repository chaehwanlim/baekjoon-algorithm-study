#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0, sum = 0, zero = 0;
string num;
vector<int> intArr;

int main() {
  cin >> num;

  for(int i=0; i<num.size(); i++) {
    if(num[i] - '0' == 0)
      zero = 1;

    sum += num[i] - '0';

    intArr.push_back(num[i] - '0');
  }

  if(zero == 0 || sum % 3 != 0) {
    cout << "-1";
  }
  else {
    sort(intArr.begin(), intArr.end(), greater<int>());
    for(int i=0; i<intArr.size(); i++) {
      cout << intArr[i];
    }
  }
  
  return 0;
  
}