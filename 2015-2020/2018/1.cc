#include <bits/stdc++.h>
using namespace std;


/*
输入字符串，字符串以‘#’结尾，判断每个字符串中0-9数字各有多少个?
*/


unordered_map<char, int> mp;



int main() {
  freopen("in.txt", "r", stdin);
  string s;
  getline(cin, s, '#'); 
  for (int i=0; i<s.length()-1; ++i) {
    mp[s[i]] ++;
  }

  for (auto x:mp) {
    cout << x.first << ":" << x.second << endl;
  }

  return 0;
}