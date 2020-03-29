#include <iostream>
#include <algorithm>
using namespace std;

int broken, guitar, minCost = 0, minPack = 1000, minUnit = 1000;
pair<int, int> brand[50];

int main() {
  cin >> broken >> guitar;

  for(int i=0; i<guitar; i++) {
    cin >> brand[i].first >> brand[i].second;
    minPack = min(brand[i].first, minPack);
    minUnit = min(brand[i].second, minUnit);
  }

  while(broken) {
    if(broken <= 6) {
      minCost += min(minPack, minUnit * broken);
      broken = 0;
      cout << minCost;
    }
    else {
      minCost += min(minPack, minUnit * 6);
      broken -= 6;
    }
  }

  return 0;



}