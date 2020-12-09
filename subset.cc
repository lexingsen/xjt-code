/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-12-09 20:32:39
 */

#include <bits/stdc++.h>
using namespace std;


using vvi = vector< vector<int> >;
using vi = vector<int>;


vvi res;

void helper(vi &a, int start, vi& track) {
  res.push_back(track);
  for (int i=start; i<a.size(); ++i) {
    track.push_back(a[i]);
    helper(a, i+1, track);
    track.pop_back();
  }
}

vvi subset(vi& a) {
  vi track;
  helper(a, 0, track);
  return res;
}


int main() {
  vector<int> a{1,2,3};
  subset(a);
  for_each(res.begin(), res.end(), [](vi &a){
    cout << "[";
    for (int i=0; i<a.size(); ++i) {
      cout << a[i];
      if (i != a.size()-1) cout << " ";
    }
    cout << "]" << endl;
  });
  return 0;
}

