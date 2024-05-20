#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  vector<int> queryTypes(100009);
  vector<string> names(100009);
  queue<string> t;

  cin >> q;
  for(int i = 1; i <= q; i++){
    cin >> queryTypes[i];
    if(queryTypes[i] == 1) cin >> names[i];
  }

  for(int i = 1; i <= q; i++){
    if(queryTypes[i] == 1) t.push(names[i]);
    if(queryTypes[i] == 2) cout << t.front() << endl;
    if(queryTypes[i] == 3) t.pop();
  }



  return 0;
}
