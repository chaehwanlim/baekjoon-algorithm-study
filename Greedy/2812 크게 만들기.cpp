#include <iostream>
#include <deque>
using namespace std;

int n = 0, k = 0, top = 0;
string str;
deque<char> dq;

int main() {
  cin >> n >> k >> str;

  for(int i=0; i<str.length(); i++) {

    //아직 숫자를 뺄 수 있고 덱에 데이터가 있으며 현재 관찰 숫자가 덱의 마지막 숫자보다 크면 덱의 마지막 숫자를 현재 관찰 숫자로 교체한다.
    while(k && !dq.empty() && dq.back() < str[i]) {
      dq.pop_back();
      k--;
    }

    dq.push_back(str[i]);
  }

  for(int i=0; i<dq.size()-k; i++) {
    cout << dq[i];
  }

  return 0;
}