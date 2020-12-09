/*
 * @Description: 最长上升子序列
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-12-09 21:00:19
 */
#include <bits/stdc++.h>
using namespace std;



// 子序列是不连续的
/*
dp[i]表示以nums[i]结尾的最长上升子序列的长度  是一个值
*/

using vi = vector<int>;
int lengthOfLongestIncreaseSubsequence(vi &&a) {
  int n = a.size();
  vi dp(n,1);
  for (int i=0; i<n; ++i) {
    for (int j=0; j<i; ++j) {
      if (a[i] > a[j]) dp[i] = max(dp[i], dp[j]+1);
    }
  }
  int res = 0;
  for (int i=0; i<n; ++i) res = max(res, dp[i]);
  return res;
}




int main() {
  cout << lengthOfLIS(vector<int>{10,9,2,5,3,7,101,18});
  return 0;
}