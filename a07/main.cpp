#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int d, n;

  cin >> d;
  cin >> n;

  // l[], r[]
  vector<int> l(n+1), r(n+1);
  // 累積和を計算するs[]
  vector<int> s(d+1, 0);
  for(int i = 0; i < n; i++) cin >> l[i] >> r[i];
  
  // 0日目は出席者数0
  s[0] = 0;
  // それぞれの日に対してl[i]からr[i]までの場所を1増やすのを人数分行う
  for(int i = 0; i < n; i++){
    for(int j = l[i]; j <= r[i]; j++) s[j] += 1;
  }

  for(int i = 1; i <= d; i++) cout << s[i] << endl;


  return 0;
}
