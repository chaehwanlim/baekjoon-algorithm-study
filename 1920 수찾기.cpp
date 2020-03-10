#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int* integers;

int binarySearch(int input, int n) {
  int low = 0, high = n-1;
  int mid = 0;

  while(1) {
    mid = (low + high) / 2;

    if(low > high) {
      return 0;
    }

    if(integers[mid] == input) {
      return 1;
    }
    else if (integers[mid] > input) {
      high = mid -1;
    }
    else {    //integers[mid] < input
      low = mid + 1;
    }
  }
}


int main() {
  int n = 0, m = 0, input = 0;

  cin >> n;

  integers = new int[n];

  for(int i=0; i<n; i++) {
    scanf("%1d", &integers[i]);
  }

  sort(integers, integers + n);

  cin >> m;
  
  for(int i=0; i<n; i++) {
    scanf("%1d ", &input);
    cout << binarySearch(input, n) << endl;
  }
  
  return 0;
}