#include <bits/stdc++.h>
#include <functional>
#include <queue>
using namespace std;

int main() {
  int q;
  vector<int> queryType(100009), prices(100009);
  priority_queue<int, vector<int>, greater<int>> price_qu;

  cin >> q;
  for(int i = 1; i <= q; i++){
    cin >> queryType[i];
    if(queryType[i] == 1) cin >> prices[i];
  }

  for(int i = 1; i <= q; i++){
    if(queryType[i] == 1) price_qu.push(prices[i]);
    if(queryType[i] == 2) cout << price_qu.top() << endl;
    if(queryType[i] == 3) price_qu.pop();
  }


  return 0;
}
