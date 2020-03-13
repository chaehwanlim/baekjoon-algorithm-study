#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int k = 0, n = 0;
vector<int> v;


bool check(int mid) {
  int count = 0;

  //길이 mid로 랜선을 잘라보고 갯수 세기
  for(int i=0; i<k; i++) {
    count += v[i] / mid;
  }

  //n개보다 적게 만들면 0 반환 , n개 이상 만들면 1 반환
  return (count >= n);
}

int binarySearch(int max) {
  int low = 1, high = max, mid = 0, result = 0;

  while(high >= low) {
    mid = (low + high) / 2;

    if(check(mid)) {
      //n개 이상 만들 수 있음
      if(mid > result) //자르는 길이의 최댓값 구하기
        result = mid;
      low = mid + 1;
    } else {
      //길이가 너무 커서 n개 이상 못 만듦
      high = mid - 1;
    }
  }

  return result;
}

int main() {
  int input = 0, maxInput = 0;

  cin >> k >> n;

  for(int i=0; i<k; i++) {
    cin >> input;
    v.push_back(input);
    if(input > maxInput)
      maxInput = input;
  }

  cout << binarySearch(maxInput);

}