#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  // input H, W
  int H, W;
  cin >> H >> W;

  // input X
  vector<vector<int>> X(H+1, vector<int>(W+1, 0));
  for(int i = 1; i <= H; i++){
    for(int j = 1; j <= W; j++) cin >> X[i][j];
  }

  // input Q
  int Q;
  cin >> Q;

  // input ABCD
  vector<int> A(Q);
  vector<int> B(Q);
  vector<int> C(Q);
  vector<int> D(Q);
  for(int i = 0; i < Q; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

  // 累積和を計算するvector Y
  vector<vector<int>> Y(H+1, vector<int>(W+1, 0));

  // 横方向の累積和を計算
  for(int i = 1; i <= H; i++){
    for(int j = 1; j <= W; j++) Y[i][j] = Y[i][j - 1] + X[i][j];
  }
  // 縦方向の累積和を計算
  for(int j = 1; j <= W; j++){
    for(int i = 1; i <= H; i++) Y[i][j] = Y[i - 1][j] + Y[i][j];
  }

  for(int q = 0; q < Q; q++){
    cout << Y[A[q] - 1][B[q] - 1] + Y[C[q]][D[q]] - Y[A[q] - 1][D[q]] - Y[C[q]][B[q] - 1] << endl;
  }



  return 0;
}
