#include <iostream>
#include <algorithm>
using namespace std;

struct coord {
  int x = 0;
  int y = 0;
};
int n = 0, tempX = 0, tempY = 0;
coord input[100000];

int compare(coord a, coord b) {
  if(a.y == b.y) {
    return (a.x < b.x);
  }
  else
  {
    return (a.y < b.y);
  }
  
}

int main() {
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> tempX >> tempY;
    coord tempCord;
    tempCord.x = tempX;
    tempCord.y = tempY;
    input[i] = tempCord;
  }

  sort(input, input + n, compare);

  for(int i=0; i<n; i++) {
    cout << input[i].x << " " << input[i].y << "\n";
  }

  return 0;
}