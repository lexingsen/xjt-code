/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-11-06 23:35:15
 */

#include <bits/stdc++.h>
using namespace std;



struct student {
  string name;
  int id;

  student(string name, int id):name(name),id(id) {}
};

struct course {
  vector<student> stu;
  double totalTime;
  unordered_map<int,int> mp;
};


const int N=3;





int main() {
  course c;
  cout << "please input the course's totaltime:";
  cin >> c.totalTime;
  for (int i=0; i<N; ++i) {
    cout << "please input student's name and id:";
    string name;
    int id;
    cin >> name >> id;
    c.stu.push_back(student(name, id));
    cout << "please input the course's status 0:formal, 1:late:";
    int status;
    cin >> status;
    c.mp[status] ++;
  }

  int sumf=0;
  int suml=0;
  for (auto x:c.mp) {
    if (x.first==0) sumf += x.second;
    if (x.first==1) suml += x.second;
  }
  

  cout << "formal rate:" << sumf*1.0 / c.stu.size() << endl;
  cout << "formal rate:" << suml*1.0 / c.stu.size() << endl;
  return 0;
}