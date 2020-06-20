#include <iostream>
#include <vector>
using namespace std;

int n = 0, k = 0, temp = 0, result = 0;

vector<int> v;
vector<int>::iterator p;

bool find(int x) {
  for (p=v.begin(); p<v.end(); p++) {
    if(*p == x) {
      return true;
    }
  }

  return false;
}

int main() {
  cin >> n >> k;

  for (int i = 0; i < k; i++) {
    cin >> temp;

    if(!find(temp)) {
      if(v.size() == n) {
        v.pop_back();
        result++;
      }
      v.push_back(temp);
    }
  }

  cout << result;

  return 0;
}