#include <iostream>
#include <stack>
using namespace std;

int n;

bool isThisVPS(string str) {
  stack<char> s;

  for (int i=0; i<str.size(); i++) {
    if(str[i] == '(') {
      s.push(str[i]);
    } else if (str[i] == ')') {
      if(!s.empty()) {
        s.pop();
      } else {
        return false;
      }
    }
  }
  
  if(s.empty())
    return true;
  else 
    return false;
}

int main() {
  cin >> n;

  string str[n];

  for (int i=0; i<n; i++) {
    cin >> str[i];
  }

  for (int i=0; i<n; i++) {
    if(isThisVPS(str[i]))
      cout<< "YES" << endl;
    else
      cout<< "NO" << endl;

  }
  return 0;
}