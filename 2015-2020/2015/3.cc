/*
 * @Description: 统计选举投票  m个选举人 n个候选人
 * @Language: 
 * @Author: 
 * @Date: 2020-11-06 23:01:06
 */
#include <bits/stdc++.h>
using namespace std;

int m=4;
int n=3;

unordered_map<string, int> mp;
vector<string> t;
int main() {
  for (int i=0; i<n; ++i) {
    cout << "please input the candidate name:";
    string name;
    cin >> name;
    t.push_back(name);
    mp[name] = 0;
  }
  cout << "the candidate name list" << endl;
  for (auto x:t) {
    cout << x << " " << endl;
  }
  for (int i=0; i<m; ++i) {
    string name;
    cout << "please input the candidate name:";
    cin >> name;
    mp[name] ++;
  }

  for (auto x:mp) {
    cout << x.first << ":" << x.second << endl;
  }
  return 0;
}