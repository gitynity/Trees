//https://www.geeksforgeeks.org/find-height-binary-tree-represented-parent-array/
//my implementation

#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > par;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    par.emplace_back(x);
  }

  vector < bool > temp(n, false);
  for (int i: par) {
    if (i == -1)
      continue;
    temp[i] = true;
  }
  vector < int > leaf;
  for (int i = 0; i < n; i++) {
    if (temp[i] == false)
      leaf.push_back(i);
  }

  int maxh = 0, h = 0;
  for (int i: leaf) {
    int x = i;
    while (x != -1) {
      x = par[x];
      h++;
    }
    maxh = max(h, maxh);
    h = 0;
  }

  cout << maxh;
  return 0;
}
