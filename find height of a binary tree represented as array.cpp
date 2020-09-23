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
  //tree representation complete. tree is represented in array by its level order traversal.
  //array is created in such a way that when a child node does not exist for a parent node we represent that missing child by -1.
  
  /*
  For example, array t[]: 55 , 10 , 32 , 0 , -1 , 3 , 4 , -1 , -1 , -1 , 6 
  will represent the following binary tree...
  
           55
         /    \
        /      \
       10       32
      / \     /   \
     0       3      4
            / \    / \
                      6  
           
  */
  
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
