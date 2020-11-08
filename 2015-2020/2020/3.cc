/*
 * @Description: 
 * @Language: 
 * @Author: 
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



// 参考deb of heap-buffer-overflow老哥的代码

int w[4] = {0,150,100,50};
int f[4][201];
int n=3;
int m=200;
int main() {
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      f[i][j]=0;
    }
  }
  
  for (int i=1; i<=n; ++i) {
    f[i][0] = 1;// 当选择第i件商品时间并且j-w[i]正好等于0  这样的方案数是一种
  }
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      if (j < w[i]) f[i][j] = f[i-1][j];
      else f[i][j] = f[i-1][j] + f[i][j-w[i]];
    }
  }
  cout << f[3][200] << endl;
  return 0;
}