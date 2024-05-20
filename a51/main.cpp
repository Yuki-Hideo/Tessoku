#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  vector<int> queryType(100009);
  vector<string> bookName(100009);
  stack<string> s;
  cin >> q;
  for(int i = 1; i <= q; i++){
    cin >> queryType[i];
    if(queryType[i] == 1) cin >> bookName[i];
  }

  for(int i = 1; i <= q; i++){
    if(queryType[i] == 1) s.push(bookName[i]);
    if(queryType[i] == 2) cout << s.top() << endl;
    if(queryType[i] == 3) s.pop();
  }


  return 0;
}
