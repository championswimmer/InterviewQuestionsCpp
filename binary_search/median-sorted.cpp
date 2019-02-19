#include "iostream"
#include "vector"
using namespace std;

double findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {

  int lA = A.size();
  int lB = B.size();
  int medPos = (lA + lB / 2) - 1;
  int a = 0, b = 0 , c = 0;
  while (c < medPos) {
    if (A[a] < B[b]) {
      if (a < lA - 1) a++;
      else b++;
    }
    if (A[a] >= B[b]) {
      if (b < lB - 1) b++;
      else a++;
    }
    c++;
  }
  cout<<A[a-1]<<' '<<B[b-1]<<endl;

  if ((lA + lB) % 2 == 1) {
    if (A[a-1] < B[b-1]) return A[a-1];
    else return B[b-1];
  } else {
    return (((double)A[a-1]) + ((double)B[b-1])) / 2;
  }
}
int main () {
  vector<int> A {1, 5, 11, 15};
  vector<int> B{3, 5, 16, 23, 44};
  cout<<findMedianSortedArrays(A, B);
  return 0;
}