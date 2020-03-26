#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct person{
  int idx;
  int age;
  string name;
};
int n = 0, tempAge = 0;
string tempName;
person people[100000];

int compareS(person a, person b) {
  if(a.age == b.age)
    return a.idx < b.idx;
  else
    return a.age < b.age;
}

int main() {
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> tempAge >> tempName;
    person temp;
    temp.idx = i;
    temp.age = tempAge;
    temp.name = tempName;
    people[i] = temp;
  }

  sort(people, people + n, compareS);

  for(int i=0; i<n; i++) {
    cout << people[i].age << " " << people[i].name << "\n";
  }

  return 0;
}