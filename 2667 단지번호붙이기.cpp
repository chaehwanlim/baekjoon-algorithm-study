#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 26
int n; 
int matrix[MAX_N][MAX_N];
int visited[MAX_N][MAX_N];
int dxdy[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int complex[MAX_N];

int numComplex = 0;

void dfs(int x, int y) {
  visited[x][y] = 1;
  matrix[x][y] = numComplex;  //해당 칸을 단지 수로 채움
  complex[numComplex]++;

  for(int i=0; i<4; i++) {
    int nextX = x + dxdy[i][0];
    int nextY = y + dxdy[i][1];
    if(0<=nextX && nextX < n && 0<=nextY && nextY < n) { //next x, y가 범위내 존재하고
      if(!visited[nextX][nextY] && matrix[nextX][nextY])
        dfs(nextX, nextY);
    }
  }
}

int main() {

  cin >> n;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      scanf("%1d", &matrix[i][j]);
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(!visited[i][j] && matrix[i][j]) {
        numComplex++;
        dfs(i, j);
      }
    }
  }

  cout << numComplex << endl;
  sort(complex, complex+numComplex);
  for(int i=1; i<=numComplex; i++)
    cout << complex[i] << endl;

}