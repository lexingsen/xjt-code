/*
 * @Description: 硬币方案数
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-09-26 00:35:54
 */
#include <bits/stdc++.h>
using namespace std;

/*
f[i][j] = f[i-1][j]
f[i][j] = f[i-1][j] + f[i-1][j-w[i]]
*/


#if 0
使用滚动数组优化到一维度
int dp(int n, int sum, vector<int>&& w) {
  vector<int> f(sum+1, 0);
  f[0] = 1;
  for (int i=0; i<n; ++i) {
    for (int j=1; j<=sum; ++j) {
      if (j >= w[i])
        f[j] = f[j] + f[j-w[i]];
    }
  }
  return f[sum];
}

int main() {
  cout << dp(3,200,vector<int>{50,100,150});
  return 0;
}
#endif


#if 1
和为sum的方案数  dp  二维
int getSum(int n, int sum, vector<int> &&w) {
  vector<vector<int>> f(sum+1, vector<int>(sum+1, 0));
  for (int i=0; i<=n; ++i) f[i][0] = 1;
  for (int i=1; i<=n; ++i) {
    for (int j=0; j<=sum; ++j) {
      if (w[i-1] > j) {
        f[i][j] = f[i-1][j];
      } else {
        f[i][j] = f[i-1][j] + f[i][j-w[i-1]];
      }
    }
  }
  return f[n][sum];
}

int main() {
  cout << getSum(3, 200, vector<int>{50,100,150});
  return 0;
}
#endif



#if 0
回溯法
int n,sum,ans;
void dfs(vector<int>& a, int target, int index) {
  if (target==0) {
    ans ++;
  }
  for (int i=index; i<a.size(); ++i) {
    if (a[i] > target) break;
    target -= a[i];
    dfs(a, target, i);
    target += a[i];
  }
}

int main() {
  vector<int> a{50,100,150};
  dfs(a, 200, 0);
  cout << "ans:" << ans << endl;
  return 0;
}

#endif


#if 0
按照完全背包的方式
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
#endif




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




