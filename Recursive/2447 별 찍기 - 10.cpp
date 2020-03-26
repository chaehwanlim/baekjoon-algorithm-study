#include <iostream>
using namespace std;

int n = 0, power = 0;
string matrix[3000][3000];

void pattern(int power) {
  if(power < 3)
    return;

  for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {
      if(i==1 && j==1) {
        matrix[i][j] = " ";
      }
      else
      {
        matrix[i][j] = "*";
      }
      
    }
  }
}

void draw() {

}

int main() {
  cin >> n;

  while(1) {
    if(n < 3)
      break;
    
    n /= 3;
    power++;
  }

  for(int i=0; i<power; i++) {
    
  }

  return 0;
}