#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 100
int n, m;
int adjacent[MAX_N][MAX_N];
vector<int> visited(MAX_N);

void dfs(int idx) {
  visited[idx] = 1;

  for(int i=1; i<=n; i++) {
    if(!visited[i] && adjacent[idx][i]){
      dfs(i);
    }
  }
}

int main() {
  int x, y, howmany = 0;
  cin >> n >> m;
  
  for(int i=0; i<m; i++) {
    cin >> x >> y;
    adjacent[x][y] = adjacent[y][x] = 1;
  }

  dfs(1);

  for(int i=2; i<visited.size(); i++) {
    if(visited[i] == 1) {
      howmany++;
    }
  }

  cout << howmany;

  return 0;
}