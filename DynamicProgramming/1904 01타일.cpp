#include <iostream>
#include <string>
using namespace std;

int n = 0;
int tile[1000001];

int main() {
  cin >> n;

  tile[1] = 1;
  tile[2] = 2;
  
  for (int i=3; i<=n; i++) {
    tile[i] = (tile[i-2] + tile[i-1]) % 15746;
  }

  cout<<tile[n];
  
  return 0;
}