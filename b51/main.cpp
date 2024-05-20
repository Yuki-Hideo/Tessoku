#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  stack<int> leftBlacketIndex;

  cin >> s;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == '(') leftBlacketIndex.push(i);
    if(s[i] == ')'){
      cout << (leftBlacketIndex.top() + 1) << " " << (i + 1) << endl;
      leftBlacketIndex.pop();
    }
  }
  
  return 0;
}
