#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int k = 0;
vector<int> minNum, maxNum;
char c[9] = {0, };

bool check(vector<int>& v) {
  for(int i=0; i<k; i++) {
    if(c[i] == '<' && v[i] > v[i+1])
      return false;
    if(c[i] == '>' && v[i] < v[i+1])
      return false;
  }

  return true;
}

int main() {
  cin >> k;

  for(int i=0; i<k; i++) {
    cin >> c[i];
  }

  for(int i=9; i>9-(k+1); i--) {
    maxNum.push_back(i);
  }

  while(1) {
    if(check(maxNum))
      break;

    prev_permutation(maxNum.begin(), maxNum.end());
  }

  for(int i=0; i<(k+1); i++) {
    minNum.push_back(i);
  }

  while(1) {
    if(check(minNum))
      break;

    next_permutation(minNum.begin(), minNum.end());
  }

  for(int i=0; i<maxNum.size(); i++) {
    cout << maxNum[i];
  }
  cout << endl;
  for(int i=0; i<minNum.size(); i++) {
    cout << minNum[i];
  }

  return 0;
  
}