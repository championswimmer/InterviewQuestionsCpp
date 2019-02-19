//
// Created by Arnav Gupta on 2019-02-19.
//
#include "iostream"
#include "stdlib.h"
#include "vector"
using namespace std;

namespace Solution {
  int pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // (ab) mod x = ((a mod x)(b mod x)) mod x
    // (aaaaa mod x) = ((a mod x)(a mod x)(...)(...)) mod x

    int b = x % d;
    for (int i = 2; i <= n; i++) {
      b = (b * x) % d;
    }
    if (b < 0) {
      b = d + b;
    }
    return b;
  }

};


int main () {
  cout<<Solution::pow(2, 3, 3);
  return 0;
}