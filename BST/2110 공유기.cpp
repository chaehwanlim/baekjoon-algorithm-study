#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0, c = 0;
vector<int> coord;

int routersNeeded(int mid) {
  int count = 1;
  int routerHome = coord[0];

  for(int i=0; i<n; i++) {
    if(mid <= coord[i] - routerHome) {
      count++;
      routerHome = coord[i];
    }
  }

  return count;
}

int binarySearch() {
  int low = 1;  //최소거리
  int high = coord.back() - coord[0]; //집 사이 최대거리
  int mid = 0;
  int result = 0;

  while(high >= low) {
    mid = (low + high) / 2; //최대거리를 축소해가며 
    int numRouter = routersNeeded(mid);
    if(numRouter >= c) {  //공유기가 요구 갯수 이상으로 설치됨
      if(mid > result) {  //공유기 사이 최대 거리 
        result = mid;
      }
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return result;
}

int main() {
  int input = 0;
  cin >> n >> c;

  for(int i=0; i<n; i++) {
    cin >> input;
    coord.push_back(input);
  }

  sort(coord.begin(), coord.end());

  cout << binarySearch();

  return 0;
}