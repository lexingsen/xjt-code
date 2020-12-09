/*
 * @Description: 最长回文子串 必须是连续的
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-12-09 21:51:38
 */
#include <bits/stdc++.h>
using namespace std;
/*
三种情况
1.长度为1 就是回文串 直接返回
2.长度为2 如果s[0]==s[1], 说明是回文串 直接返回
3.长度大于等于3
*/


// template <typename T>
// using vv<T> = vector<vector<T>>;

// template <typename T>
// using v<T> = vector<T>;
using vvb = vector<vector<bool>>;
using vb = vector<bool>;


string longestPalindromicSubstring(string s) {
  if (s.size()==1 || !s.size()) return s;
  if (s.size()==2 && s[0]==s[1]) return s;
  int n = s.size();
  vvb f(n, vb(n, false));
  int start=0,len=1;
  for (int i=1; i<n; ++i) {
    f[i][i] = 1;
    if (i+1<n && s[i]==s[i+1]) {
      start = i;
      len = 2;
      f[i][i+1] = 1;
    }
  }
  // 枚举长度[3, n]  right-i+1==L
  for (int L=3; L<=n; ++L) {
    for (int i=0; i+L-1<n; ++i) {
      int j = i+L-1;
      if (s[i]==s[j] && f[i+1][j-1]) {
        f[i][j] = 1;
        start = i;
        len = L;
      }
    }
  }
  return s.substr(start, len);
}


int main() {
  string s = "11111abcba111";
  cout << longestPalindromicSubstring(s) << endl;
  return 0;
}