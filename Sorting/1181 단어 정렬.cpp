#include <iostream>
#include <algorithm>
using namespace std;

int n = 0, flag = 0;
string input[100000], temp;

int compareS(string a, string b) {
  if(a.length() == b.length()) {
    return (a < b);
  }
  else
  {
    return (a.length() < b.length());
  }
  
}

int main() {
  cin >> n;

  for(int i=0; i<n; i++, flag=0) {
    cin >> temp;
    for(int j=0; j<i; j++) {
      if(input[j] == temp)
        flag = 1;
    }

    if(flag == 1)
      continue;
    
    input[i] = temp;
    
  }

  sort(input, input + n, compareS);

  for(int i=0; i<n; i++) {
    cout << input[i] << "\n";
  }

  return 0;
}