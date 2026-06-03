#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  int count = 0;
  cin >> n >> k;

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(i + j < k && k - (i + j) <= n) {
        count++;
        // cout << i << " " << j << endl;
      }
    }
  }

  cout << count << endl;
  return 0;
}
