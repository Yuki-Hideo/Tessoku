#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s, ans = "";
  cin >> s;
  for(int i = 0; i < (int) s.length(); i += 2){
    if(s[i] ==  s[i+1]) ans.append("1");
    else ans.append("0");
  }

  cout << ans << endl;

  cout << "MSB: " << ans[4] << endl;
  cout << "LSB: " << ans[27] << endl;

  swap(ans[4], ans[27]);

  cout << "MSB/LSB: " << ans << endl;

  // ans = ans[4:27];
  string ans2 = "";
  for(int i = 27; i <= 4; i--){
    ans2.append(ans[i]);

  }

  // int tmp = stoi(ans);
  int tmp = 0B10011010010100110110111111111111;
  // ans = stoi(ans) - 1;
  // tmp -= 1;

  cout << "tmp: " << tmp << endl;
  ans = to_string(tmp);
  for(int i = 0; i < (int) ans.length(); i++){
    if(ans[i] == '1') ans[i] = '0';
    else ans[i] = '1';
  }
  
  cout << "ans: " << ans << endl;
  return 0;
}
