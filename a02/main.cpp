#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] == x) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}