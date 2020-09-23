#include <bits/stdc++.h>

using namespace std;

int main() {
  vector < int > t;
  int x, n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x; //if no child , enter -1
    int temp = x;
    t.push_back(x);
  }

  //find height
  int i = n - 1;
  int h = 0;
  neg:
    while (t[i] == -1) {
      i--;
    }

  while (i > 0) {
    if (t[i] == -1)
      goto neg;
    if (i % 2 == 0) //it was right child
      i = (i - 2) / 2;
    else
      i = (i - 1) / 2; //it was left child
    h++;
  }
  cout << h + 1;
  return 0;
}
