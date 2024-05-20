#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  vector<int> queryType(200000), scores(200000);
  vector<string> names(200000);
  map<string, int> Map;
  cin >> q;
  for(int i = 1; i <= q;i++){
    cin >> queryType[i];
    if(queryType[i] == 1) cin >> names[i] >> scores[i];
    if(queryType[i] == 2) cin >> names[i];
  }

  for(int i = 1; i <= q; i++){
    if(queryType[i] == 1) Map[names[i]] = scores[i];
    if(queryType[i] == 2) cout << Map[names[i]] << endl;
  }


  return 0;
}
