#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n = 0;
  queue<int> q;
  cin >> n;

  for(int i=1; i<=n; i++) {
    q.push(i);
  }

  int cardToMove = 0;

  while(1) {
    q.pop(); // 카드 한번 버리기
    if(q.size() == 1)
      break;

    cardToMove = q.front();
    q.pop();
    q.push(cardToMove);
    if(q.size() == 1)
      break;
  }

  cout << q.front();

  return 0;

}