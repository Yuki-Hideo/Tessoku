#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n, q;
  int max_height = 0;
  map<int, int> hl_map, tIndex_map;

  cin >> n;
  vector<int> h(n), l(n);
  for(int i = 0; i < n; i++) {
    cin >> h[i] >> l[i];
    hl_map[l[i]] = h[i];
  }
  cin >> q;
  vector<int> t(q), answer(q);
  for(int i = 0; i < q; i++) {
    cin >> t[i];
    tIndex_map[t[i]] = i;
  }


  int NumberOfTakahashi;
  for(int i = 0; i < q; i++) {
    NumberOfTakahashi = upper_bound(l.begin(), l.end(), t[i]) - l.begin();
    // max_height = *max_element((h.begin() + NumberOfTakahashi), h.end());
    cout <<  max_height << endl;
  }

  return 0;
}
