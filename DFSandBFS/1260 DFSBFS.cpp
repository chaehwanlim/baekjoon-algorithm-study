#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, v;
#define MAX_N 1001
int adjacent[MAX_N][MAX_N];
int visited[MAX_N];

void dfs(int idx) {
  cout << idx << " ";
  visited[idx] = 1;

  for(int i = 1; i <= n; i++) {
    if(!visited[i] && adjacent[idx][i]){
      dfs(i);
    }
  }
}

void bfs(int idx) {
  queue<int> q;
  q.push(idx);
  visited[idx] = 1;

  while(!q.empty()) {
    idx = q.front();
    q.pop();

    cout << idx << ' ';

    for(int i=1; i<=n; i++) {
      if(!visited[i] && adjacent[idx][i]) {
        visited[i] = 1;
        q.push(i);
      }
    }
  }
}

int main() {
  int x, y;
  cin >> n >> m >> v;

  for(int i=0; i<m; i++){
    cin >> x >> y;
    adjacent[x][y] = adjacent[y][x] = 1;
  }

  dfs(v);
  cout<< endl;
  fill_n(visited, MAX_N, 0);
  bfs(v);

  return 0;
}