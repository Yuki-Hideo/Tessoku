#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string ans = "";

  for(int i = 9; i >= 0; i--) {
    int x = (1 << i);
    ans += to_string((n / x) % 2);
  }
  
  cout << ans << endl;
  return 0;
}
