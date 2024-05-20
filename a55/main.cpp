#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  vector<int> queryType(200000), cardNumbers(200000);
  set<int> s;
  
  cin >> q;
  for(int i = 1; i <= q; i++){
    cin >> queryType[i] >> cardNumbers[i];
  }

  for(int i = 1; i <= q; i++){
    if(queryType[i] == 1) s.insert(cardNumbers[i]);
    if(queryType[i] == 2) s.erase(cardNumbers[i]);
    if(queryType[i] == 3) {
      auto itr = s.lower_bound(cardNumbers[i]);
      if(itr == s.end()){
        cout << -1 << endl;
      } else {
        cout << *itr << endl;
      }
    }
  }
  return 0;
}
