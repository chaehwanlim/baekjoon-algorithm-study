#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

struct Meeting {
  int start;
  int end;
};

bool compare(Meeting a, Meeting b) {
  if(a.end == b.end) {
    return a.start < b.start;
  } else {
    return a.end < b.end;
  }
}

vector<Meeting> v;
int n = 0;

int main() {
  int nowTime = 0, count = 0;
/*   clock_t start, end; */

  cin >> n;

/*   start = clock(); */

  for(int i=0; i<n; i++) {
    Meeting temp;
    cin >> temp.start >> temp.end;
    v.push_back(temp);
  }

  sort(v.begin(), v.end(), compare);

  for(int i=0; i<n; i++) {
    if(v[i].start >= nowTime) {
      nowTime = v[i].end;
      count++;
    }
  }

  cout<< count;
/*   end = clock();

  cout << endl<< (end - start); */
  return 0;
} 
