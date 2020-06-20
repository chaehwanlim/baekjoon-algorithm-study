#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int n, k = 0, result = 0, idx = 0;
int m[300000] = {0, };  //무게
int v[300000] = {0, };  //가격
int bag[300000] = {0, };  //가방 용량
priority_queue<int> q;

int main() {
  cin >> n >> k;

  for (int i=0; i<n; i++) {
    cin >> m[i] >> v[i];
  }

  for (int i=0; i<k; i++) {
    cin >> bag[i];
  }

  //가방을 무게가 작은 순으로 정렬
  sort(bag, bag+k);

  for (int i=0; i<k; i++) {
    while(idx < n && m[idx] <= bag[i]) {
      q.push(v[idx]);
      idx++;
    }

    if(!q.empty()) {
      result += q.top();
      q.pop();
    }
  }

  cout << result;

  return 0;
}