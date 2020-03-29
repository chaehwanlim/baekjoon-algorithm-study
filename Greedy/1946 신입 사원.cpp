#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t, n, intRank, output;
pair<int, int> people[100000];
vector<int> outputs;

int main() {
  cin >> t;

  while(t--) {
    cin >> n;

    for(int i=0; i<n; i++) {
      cin >> people[i].first >> people[i].second;
    }

    sort(people, people + n);

    output = 1;
    intRank = people[0].second;

    for(int i=1; i<n; i++) {
      if(people[i].second < intRank) {
        intRank = people[i].second;
        output++;
      }
    }

    cout << output << '\n';

  }

  return 0;
}