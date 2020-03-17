#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, m = 0;
char input[51][51] = {0, };
char matrix[8][8] = {0, };

void copy(int startX, int startY) {
  for(int i=0; i<8; i++) {
    for(int j=0; j<8; j++) {
      matrix[i][j] = input[startX + i][startY + j];
    }
  }
}

int check() {
  int cnt_startW = 0, cnt_startB = 0;

  for(int i=0; i<8; i++) {
    for(int j=0; j<8; j++) {
      if((i+j) % 2 == 0)
      {
        if(matrix[i][j] == 'B'){
          cnt_startW++;
        }
        else if (matrix[i][j] == 'W') {
          cnt_startB++;
        }
      } 
      else if((i+j) % 2 == 1)
      {
        if(matrix[i][j] == 'B') {
          cnt_startB++;
        }
        else if (matrix[i][j] == 'W') {
          cnt_startW++;
        }

      }
    }
  }

  return min(cnt_startW, cnt_startB);
}

int main() {
  int minToChange = 500;
  cin >> n >> m;

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cin >> input[i][j];
    }
  }

  for(int i=0; i<=n-8; i++) {
    for(int j=0; j<=m-8; j++) {
      copy(i, j);
      minToChange = min(minToChange, check());
    }
  }

  cout<<minToChange;

  return 0;
}