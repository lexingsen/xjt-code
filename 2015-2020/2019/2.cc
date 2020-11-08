/*
检测是否为回文串 包含空格
1.递归
2.非递归
*/

#include <bits/stdc++.h>
using namespace std;


bool isValidRecursion(string s, int i, int j) {
  while (!isalpha(s[i])) i ++;
  while (!isalpha(s[j])) j --;
  if (i == j) {
    return true;
  } else if (tolower(s[i] == tolower(s[j]))) {
  } else {  
    return isValidRecursion(s, i+1, j-1);
  }
}

bool isValidNoRecursion(string s) {
  string t = "";
  for (int i=0; i<s.length(); ++i) {
    if (isalpha(s[i])) t += tolower(s[i]);
  }
  int n = t.length();
  for (int i=0; i<n/2; ++i) {
    if (s[i] != s[n-1-i]) return false;
  }
  return true;
}



int main() {
  string b;
  getline(cin, b);

  cout << isValidRecursion(b, 0, b.length()-1) << endl;
  cout << isValidNoRecursion(move("abccba")) << endl;
  return 0;
}