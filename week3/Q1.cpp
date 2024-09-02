#include <iostream>
#include <cmath>
#include <string>
#include <array>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

typedef unsigned int ui;
typedef unsigned long ul;

using namespace std;


string rs(string n) {
  while (n.size() > 1) {
    ui sum = 0;
    for (char ch: n) 
      sum += ch - '0';
    n = to_string(sum);
  }
  return n;
}

int main() {
  string n; ui k;
  cin >> n >> k;
  cout << rs(to_string(atoi(rs(n).c_str())*k)) << "\n";
}