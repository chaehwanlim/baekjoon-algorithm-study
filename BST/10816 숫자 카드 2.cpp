#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> cards;

int lowerBound(int n, int input) {
  int low = 0, high = n - 1, mid = 0;

  while(high > low) {
    mid = (low + high) / 2;
    if(cards[mid] >= input) {
      high = mid;
    } else 
      low = mid + 1;
  }
  
  return high;
}

int upperBound(int n, int input) {
  int low = 0, high = n, mid = 0;

  while(high > low) {
    mid = (low + high) / 2;
    if(cards[mid] > input) {
      high = mid;
    } else
    {
      low = mid + 1;
    }
  }
  return high;
}

int main() {
  int n = 0, m = 0, input = 0, result = 0;
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> input;
    cards.push_back(input);
  }

  sort(cards.begin(), cards.end());

  cin >> m;

  for(int i=0; i<m; i++) {
    cin >> input;

    result = upperBound(n, input) - lowerBound(n, input);
    cout << result << " ";
  }

}