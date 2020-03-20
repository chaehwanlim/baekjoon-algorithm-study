#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, costMin= 0, minIdx = 0;
int flag[3] = {0, 0, 0};
int house[1001][3] = {{0, 0, 0}, };
int cost[1001][3] = {{0, 0, 0}, };

int main() {
  cin >> n;

  for(int i=1; i<=n; i++) {
    cin >> house[i][0] >> house[i][1] >> house[i][2]; 
  }

  for(int i=1; i<=n; i++) {
    cost[i][0] = min(cost[i-1][1], cost[i-1][2]) + house[i][0];
    cost[i][1] = min(cost[i-1][0], cost[i-1][2]) + house[i][1];
    cost[i][2] = min(cost[i-1][0], cost[i-1][1]) + house[i][2];
  }

  cout << min(min(cost[n][0], cost[n][1]), cost[n][2]);

  return 0;
  
}