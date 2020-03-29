#include <iostream>
#include <string>
using namespace std;

string a, b, comp;
int diff = 0, minDiff = 10000;

int main() {
  cin >> a >> b;

  for(int i=0; i<=b.size()-a.size(); i++) {
    comp = b.substr(i, a.size());

    diff = 0;
    for(int j=0; j<a.size(); j++) {
      if(comp[j] != a[j])
        diff++;
    }

    if(minDiff > diff) {
      minDiff = diff;
    }
  }

  cout << minDiff;

  return 0;
}