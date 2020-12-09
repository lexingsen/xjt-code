/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-12-09 20:47:05
 */
#include <bits/stdc++.h>
using namespace std;



// 子串 子序列 子数组
// 子数组一定是连续的
// 子串连续
// 子序列不连续

// 以nums[i]结尾的“最大子数组和”为dp[i]
// dp[i]不能定义为nums[0....i]的最大子数组和


using vi = vector<int>; 
int maxSubArray(vi &nums) {
  int n = nums.size();
  if (n == 0) return 0;
  vi dp(n+1);
  dp[0] = nums[0];
  for (int i=1; i<n; ++i) {
    dp[i] = max(dp[i], dp[i-1]+nums[i]);
  }
  int res = INT_MIN;
  for (int i=0; i<n; ++i) res = max(res, dp[i]);
  return res;
}



int main() {
  return 0;
}