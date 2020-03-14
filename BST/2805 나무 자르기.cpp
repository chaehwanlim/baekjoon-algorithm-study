#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int n = 0, m = 0, input = 0, height = 0;

int check(int mid) {
  int wood = 0;
  for(int i=0; i<n; i++) {
    if((v[i] - mid) > 0) {
      wood += v[i] - mid;
    }
  }

  return (wood >= m);
}

int binarySearch() {
  int low = 0, high = height, mid = 0, result = 0;

  while(high >= low) {
    mid = (low + high) / 2;

    if(check(mid)) {  //길이가 충분함
      if(mid > result) {  //높이의 최댓값 구하기
        result = mid;
      }
      low = mid + 1;
    } else {  //길이가 부족함
      high = mid - 1;
    }
  }

  return result;
}

int main() {
  cin >> n >> m;

  for(int i=0; i<n; i++) {
    cin >> input;
    v.push_back(input);
    if(input > height) {
      height = input;
    }
  }

  cout << binarySearch();
  
  return 0;
  
}