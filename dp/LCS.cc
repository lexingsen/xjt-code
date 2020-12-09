/*
 * @Description: 最长公共子序列
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-12-09 21:15:20
 */
#include <bits/stdc++.h>
using namespace std;

// longest common subsequence
// 子序列可以不连续
// dp[i][j]表示 a[0...i]和b[0...j]最长公共子序列的长度


using vii = vector<vector<int>>;
using vi = vector<int>;

int lengthOfLongestCommonSequence(string& a, string& b) {
  int n = a.size();
  int m = b.size();
  vii dp(n+1, vi(m+1, 0));

  // base case
  dp[0][0] = 0;
  for (int i=1; i<=n; ++i) dp[i][0] = 0;
  for (int j=1; j<=m; ++j) dp[0][j] = 0;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      if (a[i] == b[j]) {
        dp[i][j] = dp[i-1][j-1] + 1;
      } else {
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }
  int res = 0;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      res = max(res, dp[i][j]);
    }
  }
  return res;
}

int main() {
  string a = "abcde";
  string b = "ace";
  cout << lengthOfLongestCommonSequence(a, b) << endl;
  return 0;
}