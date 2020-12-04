/*
 * @Description: 硬币方案数
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-09-26 00:35:54
 */
#include <bits/stdc++.h>
using namespace std;

// 01背包问题
// f[i][j] 表示考虑装入前i个物品仲的某些物品后，背包容量为j条件下的最大价值

/*
for (int i=1; i<=n; ++i) {
  for (int j=1; j<=m; ++j) {
    if (j < v[i]) f[i][j] = f[i-1][j]; //剩余空间装不进v[i]
    else f[i][j] = max(f[i-1][j], f[i-1][j-v[i]] + w[i]);
  }
}
cout << f[n][m] << endl;

优化
int f[n]; // f[i]表示背包容量为i条件下的最大价值
for (int i=1; i<=n; ++i) {
  for (int j=m; j>=v[i]; --j) {
    f[j] = max(f[j], f[j-v[i]]+w[i]);
  }
}
cout << f[m] << endl;
*/


const int n=3;
const int m=200;
int w[3]={50,100,150}; 
int dp[n+1][m+1];

int main() {
  for (int i=0; i<n+1; ++i) {
    for (int j=0; j<m+1; ++j) {
      dp[i][j] = 0;
    } 
  }	
  for (int i=0; i<n+1; ++i) dp[i][0]=1;
  for (int i=1; i<n+1; ++i) {
    for (int j=1; j<m+1; ++j) {
      dp[i][j] = 0;
      for (int k=0; k<=j/w[i-1]; ++k) {
        dp[i][j] += dp[i-1][j-k*w[i-1]];
      }
    }
  }
  cout << dp[n][m] << endl;
  return 0;
}




#if 0
int v[3] = {50,100,150};
int f[200];
int main() {
  f[0] = 1;
  for (int i=0; i<3; ++i) {
    for (int j=v[i]; j<201; ++j) {
      f[j] = f[j] + f[j-v[i]];
    }
  }
  cout << f[200] << endl;
  return 0;
}
#endif 







