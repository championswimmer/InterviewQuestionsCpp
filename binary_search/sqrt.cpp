//
// Created by Arnav Gupta on 2019-02-19.
//
#include "iostream"
using namespace std;


long sqrt(long A) {
  struct X {
    long f(long l, long h, long chk) {
      if (l == h || l + 1 == h) return l;
      long m = (l + h) / 2;
      if (m * m > chk) {
        return f(l, m, chk);
      } else {
        return f(m, h, chk);
      }
    }
  } x;

  if (A == 0) return 0;
  if (A == 1) return 1;
  if (A == 2) return 1;
  if (A == 3) return 1;
  if (A == 4) return 2;
  long i = A / 2 + 1;
  return x.f(0, i, A);

}
int main() {

  long A;
  cin >> A;
  cout << sqrt(A);
  return 0;
}