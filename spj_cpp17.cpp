#include "testlib.h"
using namespace std;

const int N = 1000 + 5;
int A[N][N], n;
bool vis[N * N];

bool check(int x) {
  for (int i = 2; i < x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  registerTestlibCmd(argc, argv);
  n = inf.readInt();
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      A[i][j] = ouf.readInt(1, n * n);
      if (vis[A[i][j]]) quitf(_wa, "The number %d appears multiple times", A[i][j]);
      vis[A[i][j]] = true;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j < n && check(A[i][j] + A[i][j + 1])) quitf(_wa, "num in cow %d row %d is %d, num in cow %d row %d is %d, sum is %d , which is not a prime!", i, j, A[i][j], i, j + 1, A[i][j + 1], A[i][j] + A[i][j + 1]);
      if (i < n && check(A[i][j] + A[i + 1][j])) quitf(_wa, "num in cow %d row %d is %d, num in cow %d row %d is %d, sum is %d , which is not a prime!", i, j, A[i][j], i + 1, j, A[i + 1][j], A[i][j] + A[i + 1][j]);
    }
  }
  quitf(_ok, "Accepted!");
}