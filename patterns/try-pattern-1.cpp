//
// Created by Arnav Gupta on 2019-02-19.
//
/*
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
 */
#include "iostream"

using namespace std;

int main() {
  int A = 5;
  int B = (2 * A) - 1;
  for (int i = 0; i < B; i++) {
    for (int j = 0; j < B; j++) {
      if (i + j < B) {
        if (i <= j) {
          cout << A - i;
        } else {
          cout << A - j;
        }
      } else {
        if (i <= j) {
          cout << j - A + 2;
        } else {
          cout << i - A + 2;
        }
      }

      cout << ' ';
    }
    cout << endl;
  }
}