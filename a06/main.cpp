#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Q;
  int A[100010];
  int L[100010], R[100010];
  
  cin >> N >> Q;
  // 0日目は0人としておく
  A[0] = 0;
  for(int i = 1; i <= N; i++) cin >> A[i];
  for(int i = 0; i < Q; i++) cin >> L[i] >> R[i];

  
  for(int i = 1; i <= N; i++){
    A[i] += A[i - 1];
    // cout << A[i] << endl;
  }
  
  for(int i = 0; i < Q; i++){
    cout << A[R[i]] - A[L[i] - 1] << endl;
  }
  return 0;
}