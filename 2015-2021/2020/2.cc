#include <iostream>
#include <cstdlib>
using namespace std;


//a,b反转的和等于和的反转
// 反转数字

int StringToInt(string s) {
  return atoi(s.c_str());
}

void reverse(string& s) {
  for (int i=0; i<s.length()/2; ++i) {
    swap(s[i], s[s.length()-1-i]);
  }
}

int main() {
  int n;
  cin >> n;
  int a,b;
  while (n --) {
    cin >> a >> b;
    string x = to_string(a);
    string y = to_string(b);
    string z = to_string(a+b);
    reverse(x);
    reverse(y);
    reverse(z);
    cout << StringToInt(x) << endl;
    cout << StringToInt(y) << endl;
    cout << StringToInt(z) << endl;
    if ((StringToInt(x)+StringToInt(y)) == StringToInt(z)) {
      cout << "a = " << a << " b = " << b << endl;
    } else {
      cout << "none" << endl;
    }
  }
  return 0;
}