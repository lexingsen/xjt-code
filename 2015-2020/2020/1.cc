#include <iostream>
using namespace std;



int main() {
  for (int a=0; a<=9; ++a) {
    for (int b=0; b<=9; ++b) {
      for (int c=0; c<=9; ++c) {
        for (int d=0; d<=9; ++d) {
          int x = a*1000 + b*100 + c*10 + d;
          int y = c*1000 + a*100 + d*10 + b;
          if (x + y == 9102) {
            cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << endl;
          }
        }
      }
    }
  }
  return 0;
}