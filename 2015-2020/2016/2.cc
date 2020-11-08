/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-11-06 23:35:15
 */
#include <bits/stdc++.h>
using namespace std;



int cnt(string &s, int n) {
  if (n < 0 || n >= 10) return -1;
  int res = 0;
  for (int i=0; i<s.length(); ++i) {
    if (s[i]-'0' == n) res ++;
  }
  return res;
}

int main() {
  string s;
  getline(cin, s);
  int n;
  cin >> n;

  cout << cnt(s, n) << endl;
  return 0;
}