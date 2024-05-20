#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  string a;
  queue<int> t;

  cin >> n >> x;
  cin >> a;

  t.push(x - 1); // 0インデックスにしておく
  // a.replace(x, 1, "@");
  a[t.front()] = '@';
  int pos;
  while(!(t.empty()) /*キューが空になるまでループ*/){
    pos = t.front();
    t.pop();

    if(a[pos - 1] == '.'){
      // a.replace(pos - 1, 1, "@");
      a[pos - 1] = '@';
      t.push(pos - 1);
    }

    if(a[pos + 1] == '.'){
      // a.replace(pos + 1, 1, "@");
      a[pos + 1] = '@';
      t.push(pos + 1);
    }
  }

  cout << a << endl;


  return 0;
}
