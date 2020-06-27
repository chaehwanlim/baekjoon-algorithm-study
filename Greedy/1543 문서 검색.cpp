#include <iostream>
using namespace std;

int result = 0;
string doc, word;
bool flag = true;

int main() {
  getline(cin, doc);
  getline(cin, word);

  for(int i=0; i<doc.length() + 1; i++) {
    flag = true;

    //substring 비교
    for(int j=0; j<word.length(); j++) {
      if(doc[i+j] != word[j]) {
        flag = false;
        break;
      }
    }

    if (flag) {
      result++;

      i += word.length() - 1;
    }
  }

  cout << result;

  return 0;
}