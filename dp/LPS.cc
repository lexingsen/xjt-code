/*
 * @Description: 最长回文子序列
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-12-09 21:21:10
 */
#include <bits/stdc++.h>
using namespace std;
// 子序列可以不连续 ！！！


/*
对于任意字符串。
如果头尾相同，那么它的最长回文子序列一定是去掉头尾的部分的最长回文子序列加上头和尾。
如果头尾不同，那么它的最长回文子序列一定是去掉头的部分的最长回文子序列和去掉尾的部分的最长回文子序列的较长的那个。
*/
using vvi = vector<vector<int>>;
using vi = vector<int>;

// dp[i][j]表示s[i]到s[j]的回文子序列的最大长度

int lengthOfLongestPalindromicSubsequence(string s) {
  int n = s.size();
  vvi dp(n, vi(n,0));
  for (int i=0; i<n; ++i) dp[i][i] = 1;
  for (int i=0; i+1<n; ++i) {
    if (s[i] == s[i+1]) {
      dp[i][i+1] = 2;
    } else {
      dp[i][i+1] = 1;
    }
  }
  // 枚举长度  right-i+1=L
  for (int L=3; L<=n; ++L) {
    for (int i=0; i+L-1<n; ++i) {
      int j = i+L-1;
      if (s[i]==s[j]) {
        dp[i][j] = dp[i+1][j-1]+2; // 扩充了两个字符，头尾
      } else {
        dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
      }
    }
  }
  return dp[0][n-1];
}


int main() {
  string s = "ddadccd";
  cout << lengthOfLongestPalindromicSubsequence(s) << endl;
  return 0;
}