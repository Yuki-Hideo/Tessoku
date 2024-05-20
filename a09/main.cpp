#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n+1, 0), b(n+1, 0), c(n+1, 0), d(n+1, 0);
  // 累積和z 
  vector<vector<int>> z(h+1, vector<int>(w+1, 0));

  for(int i = 1; i <= n; i++){
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  // 累積和の下準備
  for(int i = 1; i <= n; i++){
    z[a[i]][b[i]] += 1;
    z[a[i]][d[i] + 1] -= 1;
    z[c[i] + 1][b[i]] += 1;
    z[c[i] + 1][d[i] + 1] -= 1;
  }
  // 横の累積和
  for(int i = 1; i <= h; i++){
    for(int j = 1; j <= w; j++){
      z[i][j] += z[i][j - 1];
    }
  }
  // 縦の累積和
  for(int j = 1; j <= w; j++){
    for(int i = 1; i <= h; i++){
      z[i][j] += z[i - 1][j];
    }
  }

  for(int i = 1; i <= h; i++){
    for(int j = 1; j <= w; j++){
      cout << z[i][j] << " ";
    }
    cout << endl;
  }



  return 0;
}
