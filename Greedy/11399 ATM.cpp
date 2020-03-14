#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0;
vector<int> people;

int main() {
  int input = 0, result = 0;
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> input;
    people.push_back(input);
  }

  sort(people.begin(), people.end());

  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      result += people[j];
    }
  }

  cout << result;
  
  return 0;
}