#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n = 0, temp = 0, prev = 0, next = 0;
int v[1000];

int main() {
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> v[i];
  }

  //Bubble Sort
  for(int i=0; i<n; i++) {
    for(int j=0; j<(n-i-1); j++) {
      if(v[j] > v[j+1]) {
        temp = v[j];
        v[j] = v[j+1];
        v[j+1] = temp;
      }
    }
  }

  for(int i=0; i<n; i++) {
    cout << v[i] << endl;
  }

  return 0;
}